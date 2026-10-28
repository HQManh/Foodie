// rea decompile_all
// name: thunk_FUN_03f6b16c
// address: 0x75dccec
// body: available
// range: 0x75dccec-0x75dccef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f6b16c(long *param_1,int param_2,long *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  undefined8 uVar6;
  void *__dest;
  size_t __n;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((((*(char *)(*param_1 + 0x132) == *(char *)(*param_3 + 0x132)) && (param_1[2] == 0)) &&
      (param_3[2] == 0)) && (uVar1 = FUN_03f98240(param_3), param_5 + param_4 <= uVar1)) {
    uVar1 = param_5 + param_2;
    uVar2 = FUN_03f98240(param_1);
    if (uVar1 <= uVar2) {
      lVar4 = *param_3;
      lVar9 = *(long *)(*param_1 + 0x40);
      lVar8 = *(long *)(lVar4 + 0x40);
      if ((lVar9 == DAT_095353e8) && (*(int *)(lVar8 + 0x28) < 0)) {
        if (param_2 < (int)uVar1) {
          plVar7 = param_1 + (long)param_2 + 4;
          uVar1 = param_5;
          do {
            if ((*plVar7 != 0) && (lVar4 = FUN_03f99350(*plVar7,lVar8), lVar4 == 0)) {
              return 0;
            }
            uVar1 = uVar1 - 1;
            plVar7 = plVar7 + 1;
          } while (uVar1 != 0);
          lVar4 = *param_3;
        }
        iVar3 = il2cpp_array_element_size(lVar4);
        plVar7 = (long *)((long)param_3 + (long)iVar3 * (long)param_4);
        __n = (long)iVar3 * (long)(int)param_5;
        memset(plVar7 + 4,0,__n);
        if (0 < (int)param_5) {
          uVar5 = (ulong)param_5;
          param_1 = param_1 + (long)param_2 + 4;
          __dest = (void *)((long)param_3 + (long)iVar3 * (long)param_4 + 0x20);
          do {
            if (*param_1 == 0) {
LAB_03f6b3b0:
              uVar6 = FUN_03fa6838(
                                  "At least one element in the source array could not be cast down to the destination array type."
                                  );
                    /* WARNING: Subroutine does not return */
              FUN_03fa5c38(uVar6,0);
            }
            __src = (void *)FUN_03f99594();
            memcpy(__dest,__src,(long)iVar3);
            uVar5 = uVar5 - 1;
            __dest = (void *)((long)__dest + (long)iVar3);
            param_1 = param_1 + 1;
          } while (uVar5 != 0);
        }
      }
      else {
        if (lVar9 != lVar8) {
          if (*(int *)(lVar8 + 0x28) < 0) {
            return 0;
          }
          if ((*(ushort *)(lVar8 + 0x135) >> 2 & 1) != 0) {
            return 0;
          }
          if (*(int *)(lVar9 + 0x28) < 0) {
            return 0;
          }
          if ((*(ushort *)(lVar9 + 0x135) >> 2 & 1) != 0) {
            return 0;
          }
          uVar5 = FUN_03fbf7c0(lVar8,lVar9,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_03fbf7c0(lVar9,lVar8,0);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
          }
          else if (param_2 < (int)uVar1) {
            plVar7 = param_1 + (long)param_2 + 4;
            uVar1 = param_5;
            do {
              if ((*plVar7 != 0) && (lVar4 = FUN_03f99350(*plVar7,lVar8), lVar4 == 0))
              goto LAB_03f6b3b0;
              uVar1 = uVar1 - 1;
              plVar7 = plVar7 + 1;
            } while (uVar1 != 0);
          }
        }
        iVar3 = il2cpp_array_element_size(*param_3);
        __n = (long)iVar3 * (long)(int)param_5;
        plVar7 = (long *)((long)param_3 + (long)iVar3 * (long)param_4);
        memmove(plVar7 + 4,(void *)((long)param_1 + (long)iVar3 * (long)param_2 + 0x20),__n);
      }
      FUN_03f5d7b8(plVar7 + 4,__n);
      return 1;
    }
  }
  return 0;
}

