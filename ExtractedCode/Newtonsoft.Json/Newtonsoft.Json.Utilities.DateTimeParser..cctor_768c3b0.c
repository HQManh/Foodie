// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeParser$$.cctor
// address: 0x768c3b0
// body: available
// range: 0x768c3b0-0x768c633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768c630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_DateTimeParser___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09522571 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835b0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091f3b68);
    FUN_03f5c2a4(&DAT_09203b18);
    FUN_03f5c2a4(&DAT_09203b10);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_09203b08);
    FUN_03f5c2a4(&DAT_09203b00);
    FUN_03f5c2a4(&DAT_09225d80);
    FUN_03f5c2a4(&DAT_09225d98);
    FUN_03f5c2a4(&DAT_09203b20);
    FUN_03f5c2a4(&DAT_09225d68);
    FUN_03f5c2a4(&DAT_091f8f50);
    FUN_03f5c2a4(&DAT_09225d78);
    FUN_03f5c2a4(&DAT_09225d28);
    FUN_03f5c2a4(&DAT_09225d70);
    DAT_09522571 = 1;
  }
  uVar3 = FUN_03f5c394(DAT_091801b8,7);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar3,DAT_091f3b68,0);
  **(undefined8 **)(DAT_091835b0 + 0xb8) = uVar3;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091835b0 + 0xb8),uVar3);
  lVar1 = DAT_09225d68;
  if (DAT_09225d28 != 0) {
    lVar4 = *(long *)(DAT_091835b0 + 0xb8);
    *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(DAT_09225d28 + 0x10);
    lVar2 = DAT_09225d70;
    if (lVar1 != 0) {
      *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(lVar1 + 0x10);
      lVar1 = DAT_09225d78;
      if (lVar2 != 0) {
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
        lVar2 = DAT_09225d80;
        if (lVar1 != 0) {
          *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar1 + 0x10);
          lVar1 = DAT_09225d98;
          if (lVar2 != 0) {
            *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar2 + 0x10);
            lVar2 = DAT_09203b00;
            if (lVar1 != 0) {
              *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(lVar1 + 0x10);
              lVar1 = DAT_09203b08;
              if (lVar2 != 0) {
                *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar2 + 0x10);
                lVar2 = DAT_09203b10;
                if (lVar1 != 0) {
                  *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar1 + 0x10);
                  lVar1 = DAT_09203b18;
                  if (lVar2 != 0) {
                    *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar2 + 0x10);
                    lVar2 = DAT_09203b20;
                    if (lVar1 != 0) {
                      *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar1 + 0x10);
                      lVar1 = DAT_091f8a38;
                      if (lVar2 != 0) {
                        *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar2 + 0x10);
                        lVar2 = DAT_091f8f50;
                        if (lVar1 != 0) {
                          *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar1 + 0x10);
                          if (lVar2 != 0) {
                            *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar2 + 0x10);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

