// rea decompile_all
// name: System.Security.Cryptography.TripleDES$$EqualBytes
// address: 0x746e154
// body: available
// range: 0x746e154-0x746e2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746e208 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746e2e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746e2e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Security_Cryptography_TripleDES__EqualBytes
               (long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((int)param_2 < 0) {
    uVar5 = thunk_FUN_03fc39d4(&DAT_09208d80);
    uVar6 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09223228;
  }
  else {
    if (-1 < (int)param_3) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = *(uint *)(param_1 + 0x18);
      if (((int)(param_4 + param_2) <= (int)uVar3) && ((int)(param_4 + param_3) <= (int)uVar3)) {
        if ((int)param_4 < 1) {
          bVar4 = true;
        }
        else {
          uVar9 = 0;
          bVar4 = false;
          uVar1 = 0;
          if (param_2 <= uVar3) {
            uVar1 = uVar3 - param_2;
          }
          uVar2 = 0;
          if (param_3 <= uVar3) {
            uVar2 = uVar3 - param_3;
          }
          do {
            if ((uVar1 == uVar9) || (uVar2 == uVar9)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(char *)(param_1 + 0x20 + (long)(int)(param_2 + (int)uVar9)) !=
                *(char *)(param_1 + 0x20 + (long)(int)(param_3 + (int)uVar9))) {
              return bVar4;
            }
            uVar9 = uVar9 + 1;
            bVar4 = param_4 <= uVar9;
          } while (param_4 != uVar9);
        }
        return bVar4;
      }
      uVar5 = thunk_FUN_03fc39d4(&DAT_09212d68);
      uVar6 = System_Environment__GetResourceString(uVar5,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      System_ArgumentException___ctor(uVar5,uVar6,0);
      goto LAB_0746e2cc;
    }
    uVar5 = thunk_FUN_03fc39d4(&DAT_09208d80);
    uVar6 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09223230;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentOutOfRangeException___ctor(uVar5,uVar8,uVar6,0);
LAB_0746e2cc:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091dbb98);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

