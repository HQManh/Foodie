// rea decompile_all
// name: Mono.Globalization.Unicode.NormalizationTableUtil$$.cctor
// address: 0x7417798
// body: available
// range: 0x7417798-0x7417b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7417b08 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_NormalizationTableUtil___cctor(void)

{
  undefined8 uVar1;
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
  undefined8 *puVar12;
  
  if ((DAT_09520f55 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182660);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091888e8);
    FUN_03f5c2a4(&DAT_091f4150);
    FUN_03f5c2a4(&DAT_091f4178);
    FUN_03f5c2a4(&DAT_091f42c8);
    FUN_03f5c2a4(&DAT_091f42d0);
    FUN_03f5c2a4(&DAT_091f42e0);
    FUN_03f5c2a4(&DAT_091f4320);
    FUN_03f5c2a4(&DAT_091f4330);
    FUN_03f5c2a4(&DAT_091f4368);
    FUN_03f5c2a4(&DAT_091f43a0);
    FUN_03f5c2a4(&DAT_091f4400);
    DAT_09520f55 = 1;
  }
  uVar1 = FUN_03f5c394(DAT_091801b8,0xb);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f4178,0);
  uVar2 = FUN_03f5c394(DAT_091801b8,0xb);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f42d0,0);
  uVar3 = FUN_03f5c394(DAT_091801b8,9);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar3,DAT_091f42c8,0);
  uVar4 = FUN_03f5c394(DAT_091801b8,9);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar4,DAT_091f4368,0);
  uVar5 = FUN_03f5c394(DAT_091801b8,0x1e);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar5,DAT_091f42e0,0);
  uVar6 = FUN_03f5c394(DAT_091801b8,0x1e);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar6,DAT_091f4150,0);
  uVar7 = FUN_03f5c394(DAT_091801b8,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar7,DAT_091f4400,0);
  uVar8 = FUN_03f5c394(DAT_091801b8,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar8,DAT_091f43a0,0);
  uVar9 = FUN_03f5c394(DAT_091801b8,9);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar9,DAT_091f4330,0);
  uVar10 = FUN_03f5c394(DAT_091801b8,9);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar10,DAT_091f4320,0);
  uVar11 = thunk_FUN_03f9944c(DAT_09182660);
  Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar11,uVar1,uVar2,0,0);
  **(undefined8 **)(DAT_091888e8 + 0xb8) = uVar11;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091888e8 + 0xb8),uVar11);
  uVar1 = thunk_FUN_03f9944c(DAT_09182660);
  Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar1,uVar3,uVar4,0,0);
  puVar12 = (undefined8 *)(*(long *)(DAT_091888e8 + 0xb8) + 8);
  *puVar12 = uVar1;
  thunk_FUN_03f5d7b8(puVar12,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09182660);
  Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar1,uVar5,uVar6,0,0);
  puVar12 = (undefined8 *)(*(long *)(DAT_091888e8 + 0xb8) + 0x10);
  *puVar12 = uVar1;
  thunk_FUN_03f5d7b8(puVar12,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09182660);
  Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar1,uVar7,uVar8,0,0);
  puVar12 = (undefined8 *)(*(long *)(DAT_091888e8 + 0xb8) + 0x18);
  *puVar12 = uVar1;
  thunk_FUN_03f5d7b8(puVar12,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09182660);
  Mono_Globalization_Unicode_CodePointIndexer___ctor(uVar1,uVar9,uVar10,0,0);
  puVar12 = (undefined8 *)(*(long *)(DAT_091888e8 + 0xb8) + 0x20);
  *puVar12 = uVar1;
  thunk_FUN_03f5d7b8(puVar12,uVar1);
  return;
}

