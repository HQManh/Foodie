// rea decompile_all
// name: System.DateTimeFormat$$.cctor
// address: 0x75a1490
// body: available
// range: 0x75a1490-0x75a17c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a17b8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a17bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a17c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeFormat___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_09521c2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091f43d8);
    FUN_03f5c2a4(&DAT_091f9688);
    FUN_03f5c2a4(&DAT_091f9690);
    FUN_03f5c2a4(&DAT_091f9680);
    FUN_03f5c2a4(&DAT_091f9670);
    FUN_03f5c2a4(&DAT_091f9698);
    FUN_03f5c2a4(&DAT_091f95f0);
    FUN_03f5c2a4(&DAT_091f9678);
    DAT_09521c2d = 1;
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  **(undefined8 **)(DAT_09183568 + 0xb8) = *(undefined8 *)(*(long *)(DAT_0918bd60 + 0xb8) + 0x10);
  uVar1 = FUN_03f5c394(DAT_0917fcc8,0x13);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f43d8,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09183568 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
    puVar2 = (undefined8 *)(*(long *)(DAT_09183568 + 0xb8) + 0x10);
    *puVar2 = uVar1;
    thunk_FUN_03f5d7b8(puVar2,uVar1);
    lVar4 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      uVar1 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedMonthNames(lVar4,0);
      puVar2 = (undefined8 *)(*(long *)(DAT_09183568 + 0xb8) + 0x18);
      *puVar2 = uVar1;
      thunk_FUN_03f5d7b8(puVar2,uVar1);
      lVar4 = *(long *)(*(long *)(DAT_09183568 + 0xb8) + 0x10);
      if (lVar4 != 0) {
        uVar1 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedDayNames(lVar4,0);
        puVar2 = (undefined8 *)(*(long *)(DAT_09183568 + 0xb8) + 0x20);
        *puVar2 = uVar1;
        thunk_FUN_03f5d7b8(puVar2,uVar1);
        lVar4 = FUN_03f5c394(DAT_091805f8,7);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x20) = DAT_091f95f0;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar4 + 0x28) = DAT_091f9670;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28));
              if (2 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x30) = DAT_091f9678;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30));
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar4 + 0x38) = DAT_091f9680;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38));
                  if (4 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x40) = DAT_091f9688;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x40));
                    if (5 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x48) = DAT_091f9690;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x48));
                      if (6 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined8 *)(lVar4 + 0x50) = DAT_091f9698;
                        thunk_FUN_03f5d7b8();
                        plVar3 = (long *)(*(long *)(DAT_09183568 + 0xb8) + 0x28);
                        *plVar3 = lVar4;
                        thunk_FUN_03f5d7b8(plVar3,lVar4);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

