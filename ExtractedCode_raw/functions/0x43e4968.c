// rea decompile_all
// name: Coffee.UIEffectInternal.MeshExtensions$$.cctor
// address: 0x43e4968
// body: available
// range: 0x43e4968-0x43e4b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e4b34 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffectInternal_MeshExtensions___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09517d58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174820);
    FUN_03f5c2a4(&DAT_09177c80);
    FUN_03f5c2a4(&DAT_091a9150);
    FUN_03f5c2a4(&DAT_0917b6e8);
    FUN_03f5c2a4(&DAT_09188068);
    FUN_03f5c2a4(&DAT_0917dfe8);
    FUN_03f5c2a4(&DAT_091eceb0);
    FUN_03f5c2a4(&DAT_091eceb8);
    FUN_03f5c2a4(&DAT_091ecec0);
    FUN_03f5c2a4(&DAT_09192820);
    DAT_09517d58 = 1;
  }
  if (*(int *)(DAT_09192820 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = **(undefined8 **)(DAT_09192820 + 0xb8);
  uVar1 = thunk_FUN_03f9944c(DAT_09177c80);
  FUN_053017a8(uVar1,uVar2,DAT_091eceb0,0);
  uVar3 = **(undefined8 **)(DAT_09192820 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_0917dfe8);
  FUN_05d78cfc(uVar2,uVar3,DAT_091eceb8,0);
  uVar4 = **(undefined8 **)(DAT_09192820 + 0xb8);
  uVar3 = thunk_FUN_03f9944c(DAT_09174820);
  FUN_070a8c30(uVar3,uVar4,DAT_091ecec0,0);
  uVar4 = thunk_FUN_03f9944c(DAT_0917b6e8);
  FUN_05565d84(uVar4,uVar1,uVar2,uVar3,DAT_091a9150);
  **(undefined8 **)(DAT_09188068 + 0xb8) = uVar4;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09188068 + 0xb8),uVar4);
  return;
}

