// rea decompile_all
// name: System.Convert$$ToBase64CharArray
// address: 0x7528d40
// body: available
// range: 0x7528d40-0x7529043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7528e48 to 0x7528a80 System.Convert$$ConvertToBase64Array (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7528e68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7528fb8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7529040 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Convert__ToBase64CharArray
          (long param_1,int param_2,int param_3,long param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint local_44;
  
  if ((DAT_0952182b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_0952182b = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar5 = &DAT_0921d2d0;
  }
  else {
    if (param_4 != 0) {
      if (param_3 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar3 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_0921e638);
        puVar5 = &DAT_092049a8;
      }
      else {
        if (param_2 < 0) {
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar3 = thunk_FUN_03f9944c();
          puVar5 = &DAT_09220310;
        }
        else {
          if (-1 < (int)param_5) {
            if (1 < param_6) {
              local_44 = param_6;
              uVar3 = FUN_03f5c42c(DAT_09535420,&local_44);
              uVar4 = thunk_FUN_03fc39d4(&DAT_09204750);
              uVar3 = System_String__Format(uVar4,uVar3,0);
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar4 = thunk_FUN_03f9944c();
              uVar6 = thunk_FUN_03fc39d4(&DAT_092206f0);
              System_ArgumentException___ctor(uVar4,uVar3,uVar6);
              uVar3 = thunk_FUN_03fc39d4(&DAT_091c6178);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar4,uVar3);
            }
            if (*(int *)(param_1 + 0x18) - param_3 < param_2) {
              thunk_FUN_03fc39d4(&DAT_09181558);
              uVar3 = thunk_FUN_03f9944c();
              uVar4 = thunk_FUN_03fc39d4(&DAT_09220310);
              puVar5 = &DAT_09209708;
            }
            else {
              if (*(int *)(param_1 + 0x18) == 0) {
                return 0;
              }
              iVar1 = *(int *)(param_4 + 0x18);
              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar2 = System_Convert__ToBase64_CalculateAndValidateOutputLength
                                (param_3,param_6 == 1);
              if ((int)param_5 <= iVar1 - iVar2) {
                if ((param_5 < *(uint *)(param_4 + 0x18)) && (*(int *)(param_1 + 0x18) != 0)) {
                  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar3 = System_Convert__ConvertToBase64Array
                                    (param_4 + (ulong)param_5 * 2 + 0x20,param_1 + 0x20,param_2,
                                     param_3,param_6 == 1);
                  return uVar3;
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              thunk_FUN_03fc39d4(&DAT_09181558);
              uVar3 = thunk_FUN_03f9944c();
              uVar4 = thunk_FUN_03fc39d4(&DAT_09220318);
              puVar5 = &DAT_092011a0;
            }
            goto LAB_07529018;
          }
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar3 = thunk_FUN_03f9944c();
          puVar5 = &DAT_09220318;
        }
        uVar4 = thunk_FUN_03fc39d4(puVar5);
        puVar5 = &DAT_09212cd0;
      }
LAB_07529018:
      uVar6 = thunk_FUN_03fc39d4(puVar5);
      System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar6);
      goto LAB_0752902c;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar5 = &DAT_092207f0;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar5);
  System_ArgumentNullException___ctor(uVar3,uVar4);
LAB_0752902c:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c6178);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

