// rea decompile_all
// name: System.ValueType$$InternalEquals
// address: 0x7610cc0
// body: available
// range: 0x7610cc0-0x7610cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_ValueType__InternalEquals(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *__s1;
  void *__s2;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar13 = auStack_80;
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if (param_2 == (long *)0x0) {
    if (*(long *)(lVar2 + 0x28) == lStack_68) {
      uVar9 = FUN_03fa6794(&DAT_01a5d0bd);
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar9,0);
    }
    goto LAB_03f73960;
  }
  if (*param_1 == *param_2) {
    lVar5 = FUN_03f98700(param_1);
    if ((((*(ushort *)(lVar5 + 0x135) >> 2 & 1) == 0) || (lVar6 = FUN_03fbeb20(lVar5), lVar6 == 0))
       || (lVar6 = FUN_03fbeb20(lVar5), *(char *)(lVar6 + 10) != '\b')) {
      uVar14 = 0;
      puVar12 = (undefined1 *)0x0;
      *param_3 = 0;
      uStack_70 = 0;
      do {
        lVar6 = FUN_03fbec04(lVar5,&uStack_70);
        while( true ) {
          if (lVar6 == 0) goto LAB_03f738dc;
          if (((*(byte *)(*(long *)(lVar6 + 8) + 8) >> 4 & 1) == 0) &&
             (uVar7 = FUN_03f5d7a4(lVar6), (uVar7 & 1) == 0)) break;
          lVar6 = FUN_03fbec04(lVar5,&uStack_70);
        }
        bVar1 = *(byte *)(*(long *)(lVar6 + 8) + 10);
        uVar11 = (uint)bVar1;
        uVar10 = (uint)bVar1;
        if (bVar1 < 10) {
          if (uVar10 == 5 || bVar1 < 5) {
            if ((uVar11 - 4 < 2) || (uVar10 == 2)) {
              uVar11 = (uint)*(byte *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
              uVar10 = (uint)*(byte *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
            }
            else {
              if (uVar10 != 3) {
LAB_03f7389c:
                if (puVar12 == (undefined1 *)0x0) {
                  lVar8 = FUN_03fbf14c(lVar5);
                  puVar13 = puVar13 + lVar8 * -0x10;
                  puVar12 = puVar13;
                }
                uVar9 = FUN_03fbae64(lVar6,param_1);
                iVar3 = (int)uVar14;
                *(undefined8 *)(puVar12 + (long)iVar3 * 8) = uVar9;
                uVar9 = FUN_03fbae64(lVar6,param_2);
                uVar14 = (ulong)(iVar3 + 2);
                *(undefined8 *)(puVar12 + (long)(iVar3 + 1) * 8) = uVar9;
                goto LAB_03f73808;
              }
LAB_03f737f4:
              uVar11 = (uint)*(ushort *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
              uVar10 = (uint)*(ushort *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
            }
          }
          else {
            if (uVar10 - 6 < 2) goto LAB_03f737f4;
            if (1 < uVar11 - 8) goto LAB_03f7389c;
            uVar11 = *(uint *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
            uVar10 = *(uint *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
          }
          if (uVar11 != uVar10) goto LAB_03f73644;
        }
        else if (uVar10 == 0xc || bVar1 < 0xc) {
          if (uVar11 - 10 < 2) {
LAB_03f737cc:
            if (*(long *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) !=
                *(long *)((long)param_2 + (long)*(int *)(lVar6 + 0x18))) goto LAB_03f73644;
          }
          else {
            if (uVar11 != 0xc) goto LAB_03f7389c;
            if (*(float *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) !=
                *(float *)((long)param_2 + (long)*(int *)(lVar6 + 0x18))) goto LAB_03f73644;
          }
        }
        else if (uVar10 == 0xd) {
          if (*(double *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) !=
              *(double *)((long)param_2 + (long)*(int *)(lVar6 + 0x18))) goto LAB_03f73644;
        }
        else {
          if (uVar10 != 0xe) {
            if (uVar11 != 0xf) goto LAB_03f7389c;
            goto LAB_03f737cc;
          }
          lVar8 = *(long *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
          lVar6 = *(long *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
          if (lVar8 != lVar6) {
            plVar4 = (long *)0x0;
            if ((lVar8 == 0) || (lVar6 == 0)) goto LAB_03f73648;
            uStack_78 = FUN_03f92aac(lVar8);
            iVar3 = FUN_03f92aac(lVar6);
            if ((int)uStack_78 != iVar3) goto LAB_03f73644;
            __s1 = (void *)FUN_03f92aa4(lVar8);
            __s2 = (void *)FUN_03f92aa4(lVar6);
            iVar3 = memcmp(__s1,__s2,(uStack_78 & 0xffffffff) << 1);
            if (iVar3 != 0) goto LAB_03f73644;
          }
        }
LAB_03f73808:
      } while ((*(ushort *)(lVar5 + 0x135) >> 2 & 1) == 0);
LAB_03f738dc:
      if (puVar12 != (undefined1 *)0x0) {
        uVar9 = FUN_03f984c8(DAT_095353e8,(long)(int)uVar14);
        FUN_03f5ef9c(param_3,uVar9);
        if (0 < (int)uVar14) {
          lVar5 = 0;
          do {
            *(undefined8 *)(*param_3 + lVar5 + 0x20) = *(undefined8 *)(puVar12 + lVar5);
            FUN_03f5d7b8();
            lVar5 = lVar5 + 8;
          } while (uVar14 << 3 != lVar5);
        }
        goto LAB_03f73644;
      }
      plVar4 = (long *)0x1;
    }
    else {
      plVar4 = (long *)(ulong)((int)param_1[2] == (int)param_2[2]);
    }
  }
  else {
LAB_03f73644:
    plVar4 = (long *)0x0;
  }
LAB_03f73648:
  param_1 = plVar4;
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    return;
  }
LAB_03f73960:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

