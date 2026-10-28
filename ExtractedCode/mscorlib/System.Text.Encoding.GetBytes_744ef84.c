// rea decompile_all
// name: System.Text.Encoding$$GetBytes
// address: 0x744ef84
// body: available
// range: 0x744ef84-0x744f193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744f0bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744f0c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744f190 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Encoding__GetBytes
               (long *param_1,undefined2 *param_2,uint param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  
  if ((DAT_095210d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_095210d4 = 1;
  }
  if (param_4 == 0) {
    puVar5 = &DAT_09218720;
  }
  else {
    if (param_2 != (undefined2 *)0x0) {
      if (-1 < (int)(param_5 | param_3)) {
        lVar3 = FUN_03f5c394(DAT_0917fcc8,param_3);
        if (0 < (int)param_3) {
          if (lVar3 == 0) goto LAB_0744f0c0;
          uVar9 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar10 = (ulong)param_3;
          puVar11 = (undefined2 *)(lVar3 + 0x20);
          do {
            if (uVar9 == 0) goto LAB_0744f0bc;
            uVar10 = uVar10 - 1;
            uVar9 = uVar9 - 1;
            *puVar11 = *param_2;
            puVar11 = puVar11 + 1;
            param_2 = param_2 + 1;
          } while (uVar10 != 0);
        }
        lVar4 = FUN_03f5c394(DAT_0917fc88,param_5);
        uVar2 = (**(code **)(*param_1 + 0x248))
                          (param_1,lVar3,0,param_3,lVar4,0,*(undefined8 *)(*param_1 + 0x250));
        if ((int)param_5 <= (int)uVar2) {
          uVar2 = param_5;
        }
        if (0 < (int)uVar2) {
          if (lVar4 == 0) {
LAB_0744f0c0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar10 = 0;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) {
LAB_0744f0bc:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *(undefined1 *)(param_4 + uVar10) = *(undefined1 *)(lVar4 + 0x20 + uVar10);
            uVar10 = uVar10 + 1;
          } while (uVar2 != uVar10);
        }
        return;
      }
      puVar1 = &DAT_092186f0;
      if ((int)param_3 < 0) {
        puVar1 = &DAT_09218af8;
      }
      uVar6 = thunk_FUN_03fc39d4(puVar1);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09208d80);
      uVar7 = System_Environment__GetResourceString(uVar7,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar8 = thunk_FUN_03f9944c();
      System_ArgumentOutOfRangeException___ctor(uVar8,uVar6,uVar7,0);
      goto LAB_0744f17c;
    }
    puVar5 = (undefined8 *)&DAT_09218b60;
  }
  uVar6 = thunk_FUN_03fc39d4(puVar5);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091fbec0);
  uVar7 = System_Environment__GetResourceString(uVar7,0);
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar8 = thunk_FUN_03f9944c();
  System_ArgumentNullException___ctor(uVar8,uVar6,uVar7,0);
LAB_0744f17c:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c8c68);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar6);
}

