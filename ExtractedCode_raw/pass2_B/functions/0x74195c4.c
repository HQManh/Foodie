// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$FillSortKeyRaw
// address: 0x74195c4
// body: available
// range: 0x74195c4-0x741992f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74196ec to 0x7419a60 Mono.Globalization.Unicode.SortKeyBuffer$$AppendCJKExtension (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7419710 to 0x7419ae4 Mono.Globalization.Unicode.SimpleCollator$$FillSurrogateSortKeyRaw (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x741980c to 0x7419930 Mono.Globalization.Unicode.SortKeyBuffer$$AppendNormal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x741992c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_SimpleCollator__FillSortKeyRaw
               (undefined8 param_1,uint param_2,int param_3,long param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  if ((DAT_09520f65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f65 = 1;
  }
  if (0xffffe649 < param_2 - 0x4db6) {
    if (param_4 != 0) {
      uVar10 = (param_2 - 0x3400 >> 1 & 0x7fff) / 0x7f;
      Mono_Globalization_Unicode_SortKeyBuffer__AppendCJKExtension
                (param_4,uVar10 + 0x10,(param_2 - 0x3400) + uVar10 * -0xfe + 2);
      return;
    }
    goto LAB_0741992c;
  }
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = System_Char__GetUnicodeCategory(param_2,0);
  if ((int)uVar11 == 0x10) {
    Mono_Globalization_Unicode_SimpleCollator__FillSurrogateSortKeyRaw(uVar11,param_2,param_4);
    return;
  }
  if ((int)uVar11 == 0x11) {
    if (param_4 == 0) goto LAB_0741992c;
    uVar4 = 0;
    iVar6 = (int)(param_2 - 0xe000) / 0xfe;
    iVar5 = iVar6 + -0x1b;
    iVar6 = (param_2 - 0xe000) + iVar6 * 2 + 2;
LAB_0741969c:
    uVar7 = 0;
  }
  else {
    uVar4 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,param_2,param_3);
    if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187d38);
    }
    if (0x3040 < (param_2 & 0xffff)) {
      if (0xffc7 < (param_2 + 0x62 & 0xffff)) goto LAB_0741981c;
      uVar10 = param_2 >> 8 & 0xff;
      if (uVar10 < 0x33) {
        if ((param_2 & 0xffff) < 0x309d) {
          if ((param_2 & 0xffff) < 0x3099) goto LAB_0741981c;
        }
        else {
          if (uVar10 < 0x31) {
            uVar10 = 0x30fb;
          }
          else {
            if ((param_2 >> 4 & 0xfff) < 0x32d) goto LAB_074197a0;
            uVar10 = 0x32ff;
          }
          if (uVar10 != (param_2 & 0xffff)) {
LAB_0741981c:
            uVar7 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,param_2);
            uVar8 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,param_2);
            if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187d38);
            }
            uVar9 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(param_2);
            uVar10 = Mono_Globalization_Unicode_MSCompatUnicodeTable__IsJapaneseSmallLetter(param_2)
            ;
            if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918ac28);
            }
            bVar3 = Mono_Globalization_Unicode_SimpleCollator__IsHalfKana(param_2 & 0xffff,param_5);
            if (param_4 == 0) goto LAB_0741992c;
            uVar2 = param_5 >> 1 & 1;
            if (param_3 == 0) {
              uVar2 = 1;
            }
            uVar12 = 4;
            if (param_3 == 3) {
              uVar12 = 5;
            }
            uVar1 = 3;
            if (uVar2 == 0) {
              uVar1 = uVar12;
            }
            Mono_Globalization_Unicode_SortKeyBuffer__AppendKana
                      (param_4,uVar8,uVar7,uVar4,uVar9,uVar10 & 1,uVar1,
                       (param_2 - 0x3095 & 0xffff) < 0xffac,bVar3 & 1);
            if ((param_3 != 2) || ((param_5 >> 1 & 1) != 0)) {
              return;
            }
            iVar5 = 1;
            iVar6 = 1;
            uVar4 = 1;
            goto LAB_0741969c;
          }
        }
      }
    }
LAB_074197a0:
    iVar5 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,param_2);
    iVar6 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,param_2);
    if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187d38);
    }
    uVar7 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(param_2);
    if (param_4 == 0) {
LAB_0741992c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  Mono_Globalization_Unicode_SortKeyBuffer__AppendNormal(param_4,iVar5,iVar6,uVar4,uVar7);
  return;
}

