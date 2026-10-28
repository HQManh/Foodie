// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$.cctor
// address: 0x416e944
// body: available
// range: 0x416e944-0x416eb5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416eb58 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x416eb5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiPieceTable___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_095165d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8738);
    FUN_03f5c2a4(&DAT_091a8730);
    FUN_03f5c2a4(&DAT_09179ef8);
    FUN_03f5c2a4(&DAT_0918b680);
    FUN_03f5c2a4(&DAT_09180618);
    FUN_03f5c2a4(&DAT_091f3740);
    FUN_03f5c2a4(&DAT_091f37a0);
    FUN_03f5c2a4(&DAT_091f37c0);
    FUN_03f5c2a4(&DAT_091f3830);
    DAT_095165d3 = 1;
  }
  uVar1 = FUN_03f5c394(DAT_09180618,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f37a0,0);
  **(undefined8 **)(DAT_0918b680 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918b680 + 0xb8),uVar1);
  uVar1 = FUN_03f5c394(DAT_09180618,8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3830,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918b680 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  *(undefined8 *)(*(long *)(DAT_0918b680 + 0xb8) + 0x10) =
       *(undefined8 *)(*(long *)(DAT_0918b680 + 0xb8) + 8);
  thunk_FUN_03f5d7b8();
  uVar1 = FUN_03f5c394(DAT_09180618,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f37c0,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918b680 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_09180618,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3740,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918b680 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  lVar3 = thunk_FUN_03f9944c(DAT_09179ef8);
  FUN_053dbf8c(lVar3,DAT_091a8730);
  if (lVar3 != 0) {
    FUN_053dd1d4(lVar3,5,DAT_091a8738);
    FUN_053dd1d4(lVar3,6,DAT_091a8738);
    plVar4 = (long *)(*(long *)(DAT_0918b680 + 0xb8) + 0x28);
    *plVar4 = lVar3;
    thunk_FUN_03f5d7b8(plVar4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

