// rea decompile_all
// name: System.Text.Encoding$$GetByteCount
// address: 0x744eb94
// body: available
// range: 0x744eb94-0x744ecfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744ec40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744ecf4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744ecf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Encoding__GetByteCount(long *param_1,undefined2 *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  
  if ((DAT_095210d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_095210d1 = 1;
  }
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_091fbec0);
    uVar2 = System_Environment__GetResourceString(uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09218b60);
    System_ArgumentNullException___ctor(uVar3,uVar4,uVar2,0);
  }
  else {
    if (-1 < (int)param_3) {
      lVar1 = FUN_03f5c394(DAT_0917fcc8,param_3);
      if (param_3 != 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar6 = (ulong)param_3;
        puVar7 = (undefined2 *)(lVar1 + 0x20);
        do {
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar6 = uVar6 - 1;
          uVar5 = uVar5 - 1;
          *puVar7 = *param_2;
          puVar7 = puVar7 + 1;
          param_2 = param_2 + 1;
        } while (uVar6 != 0);
      }
                    /* WARNING: Could not recover jumptable at 0x0744ec3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))(param_1,lVar1,0,param_3,*(undefined8 *)(*param_1 + 0x210));
      return;
    }
    uVar2 = thunk_FUN_03fc39d4(&DAT_09208d80);
    uVar2 = System_Environment__GetResourceString(uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09219b28);
    System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar2,0);
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c8c58);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

