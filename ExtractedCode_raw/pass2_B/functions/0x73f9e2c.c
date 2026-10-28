// rea decompile_all
// name: Mono.Security.X509.X501$$.cctor
// address: 0x73f9e2c
// body: available
// range: 0x73f9e2c-0x73fa2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fa2dc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X501___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((DAT_09520e3d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091f3a70);
    FUN_03f5c2a4(&DAT_091f3a78);
    FUN_03f5c2a4(&DAT_091f3a80);
    FUN_03f5c2a4(&DAT_091f3a88);
    FUN_03f5c2a4(&DAT_091f3aa8);
    FUN_03f5c2a4(&DAT_091f3ab8);
    FUN_03f5c2a4(&DAT_091f3ac0);
    FUN_03f5c2a4(&DAT_091f3ac8);
    FUN_03f5c2a4(&DAT_091f3ad8);
    FUN_03f5c2a4(&DAT_091f3ae8);
    FUN_03f5c2a4(&DAT_091f3af8);
    FUN_03f5c2a4(&DAT_091f3b08);
    FUN_03f5c2a4(&DAT_091f3b18);
    FUN_03f5c2a4(&DAT_091f3b20);
    FUN_03f5c2a4(&DAT_091f3b28);
    FUN_03f5c2a4(&DAT_091f3b38);
    FUN_03f5c2a4(&DAT_0918d0e0);
    DAT_09520e3d = 1;
  }
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3aa8,0);
  **(undefined8 **)(DAT_0918d0e0 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918d0e0 + 0xb8),uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3a80,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3a70,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3b28,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3ae8,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3b20,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3af8,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x30);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3b08,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x38);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3ac0,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x40);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3ac8,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x48);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,9);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3ad8,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x50);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3b18,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x58);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3ab8,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x60);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3a78,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x68);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3a88,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x70);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_0917fc88,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3b38,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918d0e0 + 0xb8) + 0x78);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  return;
}

