// rea decompile_all
// name: FUN_03fbcdec
// address: 0x3fbcdec
// body: available
// range: 0x3fbcdec-0x3fbd1db inclusive
// range: 0x3fbd204-0x3fbd207 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbd204 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fbcdec(long param_1,long param_2,long param_3,uint param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *__s;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong __n;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long local_80 [4];
  
  lVar5 = tpidr_el0;
  uVar13 = (ulong)param_4;
  local_80[3] = *(long *)(lVar5 + 0x28);
  if (param_3 == 0) {
    bVar2 = false;
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = (long *)((long)local_80 -
                      ((-(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 0xf &
                      0xfffffffffffffff0));
    if ((int)param_4 < 1) {
      bVar2 = false;
    }
    else {
      lVar14 = 0;
      bVar3 = false;
      bVar2 = false;
      __s = plVar12;
      local_80[0] = param_2;
      local_80[1] = param_5;
      local_80[2] = lVar5;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x30) + lVar14);
        uVar1 = *(uint *)(lVar5 + 8) & 0x20000000;
        lVar5 = FUN_03fbe574(lVar5,1);
        FUN_03fbea4c();
        if ((int)*(uint *)(lVar5 + 0x28) < 0) {
          if ((*(long *)(lVar5 + 0x60) == 0) || ((*(ushort *)(lVar5 + 0x135) >> 3 & 1) == 0)) {
            lVar6 = *(long *)(param_3 + lVar14);
            if (uVar1 == 0) {
              if (lVar6 == 0) {
                __n = (ulong)(*(int *)(lVar5 + 0xf8) - 0x10);
                __s = (long *)((long)__s - (__n + 0xf & 0x1fffffff0));
                *(long **)((long)plVar12 + lVar14) = __s;
                memset(__s,0,__n);
                goto LAB_03fbcf78;
              }
            }
            else if (lVar6 == 0) {
              uVar11 = thunk_FUN_03f9944c(lVar5);
              FUN_03f5ef9c(param_3 + lVar14,uVar11);
              lVar6 = *(long *)(param_3 + lVar14);
            }
            lVar6 = FUN_03f99594(lVar6);
LAB_03fbcf2c:
            *(long *)((long)plVar12 + lVar14) = lVar6;
          }
          else {
            __s = (long *)((long)__s - ((ulong)*(uint *)(lVar5 + 0xf8) - 1 & 0xfffffffffffffff0));
            FUN_03f9959c(*(undefined8 *)(param_3 + lVar14),lVar5,__s);
            *(long **)((long)plVar12 + lVar14) = __s;
            bVar3 = bVar3 || uVar1 != 0;
            bVar2 = bVar3;
          }
        }
        else {
          if (uVar1 == 0) {
            lVar6 = *(long *)(param_3 + lVar14);
            if ((*(uint *)(lVar5 + 0x28) & 0xff0000) != 0xf0000) goto LAB_03fbcf2c;
            if (lVar6 == 0) {
              *(undefined8 *)((long)plVar12 + lVar14) = 0;
              goto LAB_03fbcf78;
            }
            plVar7 = (long *)FUN_03f99594();
            lVar5 = *plVar7;
          }
          else {
            lVar5 = param_3 + lVar14;
          }
          *(long *)((long)plVar12 + lVar14) = lVar5;
        }
LAB_03fbcf78:
        lVar14 = lVar14 + 8;
        param_5 = local_80[1];
        param_2 = local_80[0];
        lVar5 = local_80[2];
      } while (uVar13 << 3 != lVar14);
    }
  }
  lVar14 = *(long *)(param_1 + 0x20);
  iVar4 = strcmp(*(char **)(param_1 + 0x18),".ctor");
  if ((iVar4 == 0) && (lVar14 != DAT_09535468)) {
    if (param_2 == 0) {
      if ((*(long *)(lVar14 + 0x60) == 0) || ((*(ushort *)(lVar14 + 0x135) >> 3 & 1) == 0)) {
        lVar6 = thunk_FUN_03f9944c(lVar14);
        lVar10 = lVar6;
        if (*(int *)(lVar14 + 0x28) < 0) {
          lVar10 = FUN_03f99594(lVar6,lVar6);
        }
        FUN_03fbcba4(param_1,lVar10,plVar12,param_5);
        goto LAB_03fbd05c;
      }
      lVar14 = *(long *)(lVar14 + 0x48);
      param_2 = *plVar12;
    }
    else {
      FUN_03fbcba4(param_1,param_2,plVar12,param_5);
    }
    lVar6 = FUN_03f99084(lVar14,param_2);
  }
  else {
    if ((*(long *)(lVar14 + 0x60) != 0) && ((*(ushort *)(lVar14 + 0x135) >> 3 & 1) != 0)) {
      uVar11 = thunk_FUN_03f9944c(lVar14);
      uVar8 = FUN_03f99084(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2);
      uVar9 = FUN_03f99594(uVar11);
      FUN_03f9966c(uVar9,uVar8,*(undefined8 *)(param_1 + 0x20));
      param_2 = FUN_03f99594(uVar11);
    }
    lVar6 = FUN_03fbcba4(param_1,param_2,plVar12,param_5);
  }
LAB_03fbd05c:
  if (0 < (int)param_4 && bVar2) {
    lVar14 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x30) + lVar14);
      if ((((*(byte *)(lVar10 + 0xb) >> 5 & 1) != 0) &&
          (lVar10 = FUN_03fbe574(lVar10,1), *(long *)(lVar10 + 0x60) != 0)) &&
         ((*(ushort *)(lVar10 + 0x135) >> 3 & 1) != 0)) {
        uVar11 = FUN_03f99084(lVar10,*(undefined8 *)((long)plVar12 + lVar14));
        FUN_03f5ef9c(param_3 + lVar14,uVar11);
      }
      lVar14 = lVar14 + 8;
    } while (uVar13 << 3 != lVar14);
  }
  lVar14 = lVar6;
  if (*(char *)(*(long *)(param_1 + 0x28) + 10) == '\x0f') {
    if (((DAT_095357c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_095357c0), iVar4 != 0)) {
      DAT_095357b8 = thunk_FUN_03fb4f8c(DAT_095353d8,"System.Reflection","Pointer");
      __cxa_guard_release(&DAT_095357c0);
    }
    lVar14 = thunk_FUN_03f9944c(DAT_095357b8);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(lVar14 + 0x10) = lVar6;
    uVar11 = FUN_03f9ab74(uVar11);
    FUN_03f5ef9c(lVar14 + 0x18,uVar11);
  }
  if (*(long *)(lVar5 + 0x28) != local_80[3]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar14;
}

