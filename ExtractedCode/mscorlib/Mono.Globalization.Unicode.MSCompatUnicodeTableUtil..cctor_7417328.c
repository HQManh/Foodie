// rea decompile_all
// name: Mono.Globalization.Unicode.MSCompatUnicodeTableUtil$$.cctor
// address: 0x7417328
// body: available
// range: 0x7417328-0x7417797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741778c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7417790 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7417794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_MSCompatUnicodeTableUtil___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  
  if ((DAT_09520f54 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182660);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09187d40);
    FUN_03f5c2a4(&DAT_091f4080);
    FUN_03f5c2a4(&DAT_091f40a0);
    FUN_03f5c2a4(&DAT_091f4100);
    FUN_03f5c2a4(&DAT_091f4130);
    FUN_03f5c2a4(&DAT_091f4140);
    FUN_03f5c2a4(&DAT_091f4328);
    FUN_03f5c2a4(&DAT_091f43e0);
    FUN_03f5c2a4(&DAT_091f43e8);
    FUN_03f5c2a4(&DAT_091f4418);
    FUN_03f5c2a4(&DAT_091f4460);
    DAT_09520f54 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091801b8,3);
  if (lVar1 != 0) {
    if ((1 < *(uint *)(lVar1 + 0x18)) &&
       (*(undefined4 *)(lVar1 + 0x24) = 0xa000, uVar2 = DAT_091801b8, *(uint *)(lVar1 + 0x18) != 2))
    {
      *(undefined4 *)(lVar1 + 0x28) = 0xf900;
      uVar2 = FUN_03f5c394(uVar2,3);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f4080,0);
      uVar3 = FUN_03f5c394(DAT_091801b8,6);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar3,DAT_091f4460,0);
      uVar4 = FUN_03f5c394(DAT_091801b8,6);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar4,DAT_091f43e8,0);
      uVar5 = FUN_03f5c394(DAT_091801b8,6);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar5,DAT_091f4460,0);
      uVar6 = FUN_03f5c394(DAT_091801b8,6);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar6,DAT_091f43e8,0);
      uVar7 = FUN_03f5c394(DAT_091801b8,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar7,DAT_091f4130,0);
      uVar8 = FUN_03f5c394(DAT_091801b8,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar8,DAT_091f4328,0);
      uVar9 = FUN_03f5c394(DAT_091801b8,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar9,DAT_091f4130,0);
      uVar10 = FUN_03f5c394(DAT_091801b8,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar10,DAT_091f4418,0);
      uVar11 = FUN_03f5c394(DAT_091801b8,3);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar11,DAT_091f40a0,0);
      uVar12 = FUN_03f5c394(DAT_091801b8,3);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar12,DAT_091f4140,0);
      uVar13 = FUN_03f5c394(DAT_091801b8,3);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar13,DAT_091f4100,0);
      uVar14 = FUN_03f5c394(DAT_091801b8,3);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar14,DAT_091f43e0,0);
      uVar15 = thunk_FUN_03f9944c(DAT_09182660);
      Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar15,lVar1,uVar2,0xffffffff,0xffffffff);
      **(undefined8 **)(DAT_09187d40 + 0xb8) = uVar15;
      thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09187d40 + 0xb8),uVar15);
      uVar2 = thunk_FUN_03f9944c(DAT_09182660);
      Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar2,uVar3,uVar4,0,0);
      puVar16 = (undefined8 *)(*(long *)(DAT_09187d40 + 0xb8) + 8);
      *puVar16 = uVar2;
      thunk_FUN_03f5d7b8(puVar16,uVar2);
      uVar2 = thunk_FUN_03f9944c(DAT_09182660);
      Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar2,uVar5,uVar6,0,0);
      puVar16 = (undefined8 *)(*(long *)(DAT_09187d40 + 0xb8) + 0x10);
      *puVar16 = uVar2;
      thunk_FUN_03f5d7b8(puVar16,uVar2);
      uVar2 = thunk_FUN_03f9944c(DAT_09182660);
      Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar2,uVar7,uVar8,0,0);
      puVar16 = (undefined8 *)(*(long *)(DAT_09187d40 + 0xb8) + 0x18);
      *puVar16 = uVar2;
      thunk_FUN_03f5d7b8(puVar16,uVar2);
      uVar2 = thunk_FUN_03f9944c(DAT_09182660);
      Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar2,uVar9,uVar10,0,0);
      puVar16 = (undefined8 *)(*(long *)(DAT_09187d40 + 0xb8) + 0x20);
      *puVar16 = uVar2;
      thunk_FUN_03f5d7b8(puVar16,uVar2);
      uVar2 = thunk_FUN_03f9944c(DAT_09182660);
      Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar2,uVar11,uVar12,0xffffffff,0xffffffff);
      puVar16 = (undefined8 *)(*(long *)(DAT_09187d40 + 0xb8) + 0x28);
      *puVar16 = uVar2;
      thunk_FUN_03f5d7b8(puVar16,uVar2);
      uVar2 = thunk_FUN_03f9944c(DAT_09182660);
      Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar2,uVar13,uVar14,0xffffffff,0xffffffff);
      puVar16 = (undefined8 *)(*(long *)(DAT_09187d40 + 0xb8) + 0x30);
      *puVar16 = uVar2;
      thunk_FUN_03f5d7b8(puVar16,uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

