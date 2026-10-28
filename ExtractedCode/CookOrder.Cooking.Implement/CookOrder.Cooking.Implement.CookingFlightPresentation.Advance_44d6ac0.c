// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingFlightPresentation$$Advance
// address: 0x44d6ac0
// body: available
// range: 0x44d6ac0-0x44d6cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d6c50 to 0x57e23b0 FUN_057e23b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d6c54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d6c58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d6cd4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingFlightPresentation__Advance(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_095182f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b24b0);
    FUN_03f5c2a4(&DAT_091b24b8);
    FUN_03f5c2a4(&DAT_0917e150);
    FUN_03f5c2a4(&DAT_091e6d90);
    FUN_03f5c2a4(&DAT_0918efd8);
    DAT_095182f8 = 1;
  }
  if (*(char *)(param_2 + 0x30) == '\0') {
    if ((0.0 <= param_1) && (((uint)param_1 >> 0x17 & 0xff) < 0xff)) {
      if ((*(long *)(param_2 + 0x20) != 0) &&
         (lVar2 = FUN_057e28a4(*(long *)(param_2 + 0x20),DAT_091b24b8), lVar2 != 0)) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (0 < (int)uVar1) {
          lVar6 = 0;
          do {
            if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(long *)(lVar2 + 0x20 + lVar6 * 8) == 0) goto LAB_044d6c54;
            CookOrder_Cooking_Implement_CookingFlightPresentation_Motion__Advance(param_1);
            uVar1 = *(uint *)(lVar2 + 0x18);
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)uVar1);
        }
        lVar2 = *(long *)(param_2 + 0x20);
        if (*(int *)(DAT_0918efd8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar5 = *(undefined8 **)(DAT_0918efd8 + 0xb8);
        lVar6 = puVar5[1];
        if (lVar6 == 0) {
          if (*(int *)(DAT_0918efd8 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar5 = *(undefined8 **)(DAT_0918efd8 + 0xb8);
          }
          uVar7 = *puVar5;
          lVar6 = thunk_FUN_03f9944c(DAT_0917e150);
          FUN_05d78cfc(lVar6,uVar7,DAT_091e6d90,0);
          plVar3 = (long *)(*(long *)(DAT_0918efd8 + 0xb8) + 8);
          *plVar3 = lVar6;
          thunk_FUN_03f5d7b8(plVar3,lVar6);
        }
        if (lVar2 != 0) {
          FUN_057e23b0(lVar2,lVar6,DAT_091b24b0);
          return;
        }
      }
LAB_044d6c54:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921a4c0);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar4,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar7 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ff200);
    System_ObjectDisposedException___ctor(uVar7,uVar4,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c6510);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar4);
}

