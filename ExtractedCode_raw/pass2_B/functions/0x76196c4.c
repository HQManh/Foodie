// rea decompile_all
// name: System.Decimal.DecCalc$$.cctor
// address: 0x76196c4
// body: available
// range: 0x76196c4-0x7619903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76198f8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76198fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7619900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc___cctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if ((DAT_095220c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    FUN_03f5c2a4(&DAT_0917fe78);
    FUN_03f5c2a4(&DAT_09180d50);
    FUN_03f5c2a4(&DAT_091f41f0);
    FUN_03f5c2a4(&DAT_091f42f8);
    FUN_03f5c2a4(&DAT_091f43c0);
    FUN_03f5c2a4(&DAT_091807b0);
    FUN_03f5c2a4(&DAT_091807b8);
    DAT_095220c9 = 1;
  }
  uVar2 = FUN_03f5c394(DAT_091807b0,10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f42f8,0);
  **(undefined8 **)(DAT_0918ff90 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918ff90 + 0xb8),uVar2);
  uVar2 = FUN_03f5c394(DAT_091807b8,0x13);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f43c0,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_0918ff90 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = FUN_03f5c394(DAT_0917fe78,0x51);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f41f0,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_0918ff90 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  lVar4 = FUN_03f5c394(DAT_09180d50,8);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar4 + 0x28) = 0x9999999999999999;
      *(undefined8 *)(lVar4 + 0x20) = 0x19999999;
      if (uVar1 != 1) {
        *(undefined8 *)(lVar4 + 0x38) = 0xf5c28f5c28f5c28f;
        *(undefined **)(lVar4 + 0x30) = &UNK_028f5c28;
        if (2 < uVar1) {
          *(undefined8 *)(lVar4 + 0x48) = 0x4bc6a7ef9db22d0e;
          *(undefined8 *)(lVar4 + 0x40) = 0x418937;
          if (uVar1 != 3) {
            *(undefined8 *)(lVar4 + 0x58) = 0xbac710cb295e9e1b;
            *(undefined8 *)(lVar4 + 0x50) = 0x68db8;
            if (4 < uVar1) {
              *(undefined8 *)(lVar4 + 0x68) = 0xac471b4784230fcf;
              *(undefined8 *)(lVar4 + 0x60) = 0xa7c5;
              if (uVar1 != 5) {
                *(undefined8 *)(lVar4 + 0x78) = 0xf7a0b5ed8d36b4c7;
                *(undefined8 *)(lVar4 + 0x70) = 0x10c6;
                if (6 < uVar1) {
                  *(undefined8 *)(lVar4 + 0x88) = 0x7f29abcaf485787a;
                  *(undefined8 *)(lVar4 + 0x80) = 0x1ad;
                  if (uVar1 != 7) {
                    *(undefined8 *)(lVar4 + 0x98) = 0xf31dc4611873bf3f;
                    *(undefined8 *)(lVar4 + 0x90) = 0x2a;
                    *(long *)(*(long *)(DAT_0918ff90 + 0xb8) + 0x18) = lVar4;
                    thunk_FUN_03f5d7b8();
                    return;
                  }
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

