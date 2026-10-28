// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$GetSortKey
// address: 0x7418fb0
// body: available
// range: 0x7418fb0-0x741931f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7419318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741931c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_SimpleCollator__GetSortKey
               (undefined8 param_1,long param_2,int param_3,int param_4,long param_5,
               undefined4 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 local_a0 [4];
  byte *local_90;
  byte *local_88;
  undefined1 *puStack_80;
  int local_74;
  long local_70;
  long local_68;
  
  if ((DAT_09520f64 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f64 = 1;
  }
  lVar10 = 0;
  local_a0[0] = 0;
  do {
    *(undefined1 *)((long)local_a0 + lVar10) = 0;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  if (param_3 < param_4) {
    if (param_2 == 0) {
LAB_07419318:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puStack_80 = (undefined1 *)((ulong)local_a0 | 1);
    local_88 = (byte *)((ulong)local_a0 | 2);
    uVar12 = 0xffffffff;
    local_90 = (byte *)((ulong)local_a0 | 3);
    local_74 = param_4;
    local_70 = param_2;
    local_68 = param_5;
    do {
      uVar3 = System_String__get_Chars(param_2,param_3,0);
      iVar4 = Mono_Globalization_Unicode_SimpleCollator__GetExtenderType(param_1,uVar3);
      if (iVar4 == 0) {
        if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = Mono_Globalization_Unicode_SimpleCollator__IsIgnorable(uVar3,param_6);
        if ((uVar7 & 1) == 0) {
          uVar6 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar3,param_6);
          lVar10 = Mono_Globalization_Unicode_SimpleCollator__GetContraction
                             (param_1,param_2,param_3,param_4);
          if (lVar10 == 0) {
            if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsIgnorableNonSpacing(uVar6);
            if ((uVar7 & 1) == 0) {
              uVar12 = uVar6;
            }
            Mono_Globalization_Unicode_SimpleCollator__FillSortKeyRaw
                      (param_1,uVar6,0,param_5,param_6);
            param_2 = local_70;
            param_4 = local_74;
          }
          else {
            lVar8 = *(long *)(lVar10 + 0x20);
            if (lVar8 == 0) {
              lVar8 = *(long *)(lVar10 + 0x28);
              if (lVar8 == 0) goto LAB_07419318;
              uVar7 = 0;
              while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18)) {
                if (*(uint *)(lVar8 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined1 *)((long)local_a0 + uVar7) = *(undefined1 *)(lVar8 + uVar7 + 0x20);
                uVar7 = uVar7 + 1;
                lVar8 = *(long *)(lVar10 + 0x28);
                if (lVar8 == 0) goto LAB_07419318;
              }
              uVar2 = (undefined1)local_a0[0];
              uVar11 = (uint)*local_88;
              uVar1 = *puStack_80;
              if (*local_88 == 1) {
                uVar11 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar6,0);
              }
              uVar9 = (uint)*local_90;
              if (*local_90 == 1) {
                if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar9 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(uVar6);
              }
              param_5 = local_68;
              if (local_68 == 0) goto LAB_07419318;
              Mono_Globalization_Unicode_SortKeyBuffer__AppendNormal
                        (local_68,uVar2,uVar1,uVar11,uVar9);
              uVar12 = 0xffffffff;
            }
            else {
              Mono_Globalization_Unicode_SimpleCollator__GetSortKey
                        (param_1,lVar8,0,*(undefined4 *)(lVar8 + 0x10),param_5,param_6);
            }
            if (*(long *)(lVar10 + 0x18) == 0) goto LAB_07419318;
            param_3 = param_3 + *(int *)(*(long *)(lVar10 + 0x18) + 0x18) + -1;
            param_2 = local_70;
            param_4 = local_74;
          }
        }
      }
      else {
        iVar5 = Mono_Globalization_Unicode_SimpleCollator__FilterExtender
                          (param_1,uVar12,iVar4,param_6);
        param_5 = local_68;
        if (iVar5 < 0) {
          uVar2 = (undefined1)local_a0[0];
          uVar11 = (uint)*local_88;
          uVar1 = *puStack_80;
          if (*local_88 == 1) {
            uVar11 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,iVar5,iVar4);
          }
          uVar9 = (uint)*local_90;
          if (*local_90 == 1) {
            if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(iVar5);
          }
          param_5 = local_68;
          if (local_68 == 0) goto LAB_07419318;
          Mono_Globalization_Unicode_SortKeyBuffer__AppendNormal(local_68,uVar2,uVar1,uVar11,uVar9);
          param_2 = local_70;
          param_4 = local_74;
        }
        else {
          Mono_Globalization_Unicode_SimpleCollator__FillSortKeyRaw
                    (param_1,iVar5,iVar4,local_68,param_6);
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}

