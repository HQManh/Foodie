// rea decompile_all
// name: System.Text.Normalization$$TryComposeWithPreviousStarter
// address: 0x7451cf8
// body: available
// range: 0x7451cf8-0x7451f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7451f28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_Normalization__TryComposeWithPreviousStarter(long param_1,long param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  if ((DAT_095210f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888e0);
    DAT_095210f7 = 1;
  }
  if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar8 = param_3 + -1;
  System_Text_Normalization__Fetch(param_1,param_2,param_3);
  cVar1 = System_Text_Normalization__GetCombiningClass();
  if (cVar1 == '\0') {
    if (-1 < iVar8) {
      if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Text_Normalization__Fetch(param_1,param_2,iVar8);
      cVar1 = System_Text_Normalization__GetCombiningClass();
      if (cVar1 == '\0') {
LAB_07451dec:
        if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Text_Normalization__Fetch(param_1,param_2,iVar8);
        iVar3 = System_Text_Normalization__GetPrimaryCompositeHelperIndex();
        if (iVar3 != 0) {
          if (param_1 == 0) {
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar4 = *(int *)(param_2 + 0x10);
          }
          else {
            iVar4 = System_Text_StringBuilder__get_Length(param_1,0);
          }
          iVar10 = iVar8 + 1;
          if (iVar4 <= iVar10) {
            return iVar4;
          }
          uVar9 = 0xffffffff;
          do {
            if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Text_Normalization__Fetch(param_1,param_2,iVar10);
            uVar6 = System_Text_Normalization__GetCombiningClass();
            if (uVar9 != (uVar6 & 0xff)) {
              if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar7 = System_Text_Normalization__TryCompose(iVar3,uVar2,uVar5);
              if (iVar7 != 0) {
                if (param_1 != 0) {
                  System_Text_StringBuilder__set_Chars(param_1,iVar8,iVar7,0);
                  System_Text_StringBuilder__Remove(param_1,iVar10,1,0);
                  return param_3;
                }
                return -1;
              }
              uVar9 = uVar6 & 0xff;
              if (uVar9 == 0) {
                return iVar10 + 1;
              }
            }
            iVar10 = iVar10 + 1;
            if (iVar4 == iVar10) {
              return iVar4;
            }
          } while( true );
        }
      }
    }
  }
  else {
    iVar3 = param_3;
    if (-1 < iVar8) {
      do {
        if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar8 = iVar3 + -1;
        System_Text_Normalization__Fetch(param_1,param_2,iVar8);
        cVar1 = System_Text_Normalization__GetCombiningClass();
        if (cVar1 == '\0') goto LAB_07451dec;
        iVar3 = iVar8;
      } while (0 < iVar8);
    }
  }
  return param_3 + 1;
}

