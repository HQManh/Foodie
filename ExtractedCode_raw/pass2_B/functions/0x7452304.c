// rea decompile_all
// name: System.Text.Normalization$$ReorderCanonical
// address: 0x7452304
// body: available
// range: 0x7452304-0x745257f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745257c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Normalization__ReorderCanonical(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  
LAB_0745233c:
  if ((DAT_095210fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888e0);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095210fb = 1;
  }
  lVar7 = *param_2;
  if (lVar7 != 0) goto LAB_07452554;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) < 2) {
      return;
    }
    param_3 = 1;
    do {
      uVar3 = System_String__get_Chars(param_1,param_3,0);
      if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091888e0);
      }
      bVar1 = System_Text_Normalization__GetCombiningClass(uVar3);
      if (bVar1 != 0) {
        uVar3 = System_String__get_Chars(param_1,param_3 + -1,0);
        if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091888e0);
        }
        bVar2 = System_Text_Normalization__GetCombiningClass(uVar3);
        if (bVar1 < bVar2) goto LAB_07452400;
      }
      param_3 = param_3 + 1;
      if (*(int *)(param_1 + 0x10) <= param_3) {
        return;
      }
    } while( true );
  }
  goto LAB_0745257c;
LAB_07452400:
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  lVar7 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar7,uVar4,0);
  *param_2 = lVar7;
  thunk_FUN_03f5d7b8(param_2,lVar7);
  if (*param_2 == 0) goto LAB_0745257c;
  System_Text_StringBuilder__Append(*param_2,param_1,0,*(undefined4 *)(param_1 + 0x10),0);
  if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  goto LAB_0745233c;
  while (lVar7 = *param_2, lVar7 != 0) {
LAB_07452554:
    iVar6 = System_Text_StringBuilder__get_Length(lVar7,0);
    if (iVar6 <= param_3) {
      return;
    }
    if (*param_2 == 0) break;
    uVar3 = System_Text_StringBuilder__get_Chars(*param_2,param_3,0);
    if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091888e0);
    }
    bVar1 = System_Text_Normalization__GetCombiningClass(uVar3);
    if (bVar1 == 0) {
LAB_07452548:
      param_3 = param_3 + 1;
    }
    else {
      if (*param_2 == 0) break;
      iVar6 = param_3 + -1;
      uVar3 = System_Text_StringBuilder__get_Chars(*param_2,iVar6,0);
      if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091888e0);
      }
      bVar2 = System_Text_Normalization__GetCombiningClass(uVar3);
      if (bVar2 <= bVar1) goto LAB_07452548;
      if (*param_2 == 0) break;
      uVar4 = System_Text_StringBuilder__get_Chars(*param_2,iVar6,0);
      lVar7 = *param_2;
      if (lVar7 == 0) break;
      uVar5 = System_Text_StringBuilder__get_Chars(lVar7,param_3,0);
      System_Text_StringBuilder__set_Chars(lVar7,iVar6,uVar5,0);
      if (*param_2 == 0) break;
      System_Text_StringBuilder__set_Chars(*param_2,param_3,uVar4,0);
      if (1 < param_3) {
        param_3 = iVar6;
      }
    }
  }
LAB_0745257c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

