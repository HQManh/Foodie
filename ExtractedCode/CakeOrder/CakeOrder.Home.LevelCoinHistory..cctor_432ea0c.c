// rea decompile_all
// name: CakeOrder.Home.LevelCoinHistory$$.cctor
// address: 0x432ea0c
// body: available
// range: 0x432ea0c-0x432ec8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432ec88 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x432ec8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_LevelCoinHistory___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((DAT_095176c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f290);
    FUN_03f5c2a4(&DAT_0919f2a0);
    FUN_03f5c2a4(&DAT_09176988);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091877d0);
    FUN_03f5c2a4(&DAT_091f3840);
    FUN_03f5c2a4(&DAT_091f3848);
    FUN_03f5c2a4(&DAT_091f3880);
    FUN_03f5c2a4(&DAT_091f3938);
    FUN_03f5c2a4(&DAT_091f3950);
    FUN_03f5c2a4(&DAT_09220b38);
    FUN_03f5c2a4(&DAT_09218ea8);
    FUN_03f5c2a4(&DAT_09218650);
    FUN_03f5c2a4(&DAT_09223888);
    DAT_095176c4 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176988);
  FUN_06fd76bc(lVar1,DAT_0919f290);
  uVar2 = FUN_03f5c394(DAT_091801b8,100);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f3848,0);
  if (lVar1 != 0) {
    FUN_06fd8440(lVar1,DAT_09218650,uVar2,DAT_0919f2a0);
    uVar2 = FUN_03f5c394(DAT_091801b8,100);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f3880,0);
    FUN_06fd8440(lVar1,DAT_09218ea8,uVar2,DAT_0919f2a0);
    uVar2 = FUN_03f5c394(DAT_091801b8,100);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f3950,0);
    FUN_06fd8440(lVar1,DAT_09223888,uVar2,DAT_0919f2a0);
    uVar2 = FUN_03f5c394(DAT_091801b8,100);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f3840,0);
    FUN_06fd8440(lVar1,DAT_09220b38,uVar2,DAT_0919f2a0);
    **(long **)(DAT_091877d0 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091877d0 + 0xb8),lVar1);
    uVar2 = FUN_03f5c394(DAT_091801b8,100);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f3938,0);
    puVar3 = (undefined8 *)(*(long *)(DAT_091877d0 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_03f5d7b8(puVar3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

