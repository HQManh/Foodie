// rea decompile_all
// name: Coffee.UIEffects.TmpProxy$$.cctor
// address: 0x43f93a8
// body: available
// range: 0x43f93a8-0x43f960b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f9608 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_TmpProxy___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((DAT_09517e23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919dbd0);
    FUN_03f5c2a4(&DAT_09176520);
    FUN_03f5c2a4(&DAT_09179a68);
    FUN_03f5c2a4(&DAT_09179a60);
    FUN_03f5c2a4(&DAT_091a87b8);
    FUN_03f5c2a4(&DAT_09179f10);
    FUN_03f5c2a4(&DAT_0918be78);
    FUN_03f5c2a4(&DAT_091f0e78);
    FUN_03f5c2a4(&DAT_091f0e80);
    FUN_03f5c2a4(&DAT_09195138);
    FUN_03f5c2a4(&DAT_0918cce8);
    DAT_09517e23 = 1;
  }
  **(undefined8 **)(DAT_0918be78 + 0xb8) = 0;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918be78 + 0xb8),0);
  if (*(int *)(DAT_09195138 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = **(undefined8 **)(DAT_09195138 + 0xb8);
  uVar1 = thunk_FUN_03f9944c(DAT_09179a68);
  FUN_053339a8(uVar1,uVar3,DAT_091f0e78,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar3 = **(undefined8 **)(DAT_09195138 + 0xb8);
  uVar1 = thunk_FUN_03f9944c(DAT_09179a60);
  FUN_05333884(uVar1,uVar3,DAT_091f0e80,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0918cce8);
  UnityEngine_UI_VertexHelper___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179f10);
  FUN_053eb530(uVar1,DAT_091a87b8);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179f10);
  FUN_053eb530(uVar1,DAT_091a87b8);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x30);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176520);
  FUN_06efa100(uVar1,DAT_0919dbd0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918be78 + 0xb8) + 0x38);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  return;
}

