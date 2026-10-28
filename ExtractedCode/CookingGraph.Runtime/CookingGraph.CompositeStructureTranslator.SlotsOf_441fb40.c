// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator$$SlotsOf
// address: 0x441fb40
// body: available
// range: 0x441fb40-0x441fda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CompositeStructureTranslator__SlotsOf(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_09517f38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00e8);
    FUN_03f5c2a4(&DAT_091c0120);
    FUN_03f5c2a4(&DAT_091a8018);
    FUN_03f5c2a4(&DAT_09179d90);
    FUN_03f5c2a4(&DAT_091b2288);
    FUN_03f5c2a4(&DAT_0917d1e8);
    DAT_09517f38 = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = param_1;
  thunk_FUN_03f5d7b8(&local_60,param_1);
  local_58 = param_2;
  thunk_FUN_03f5d7b8(&local_58,param_2);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d1e8);
  FUN_057e0400(uVar1,DAT_091b2288);
  uStack_68 = uVar1;
  thunk_FUN_03f5d7b8((ulong)&local_70 | 8,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179d90);
  FUN_053eb530(uVar1,DAT_091a8018);
  local_70 = uVar1;
  thunk_FUN_03f5d7b8(&local_70,uVar1);
  uVar1 = local_58;
  lVar2 = DAT_091c0120;
  lVar3 = *(long *)(DAT_091c0120 + 0x38);
  if (lVar3 == 0) {
    FUN_03f95ac8(DAT_091c0120);
    lVar3 = *(long *)(lVar2 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar3 = DAT_091c00e8;
  lVar4 = *(long *)(DAT_091c00e8 + 0x38);
  uVar5 = **(undefined8 **)(lVar2 + 0xb8);
  if (lVar4 == 0) {
    FUN_03f95ac8(DAT_091c00e8);
    lVar4 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar3 = DAT_091c00e8;
  lVar4 = *(long *)(DAT_091c00e8 + 0x38);
  uVar6 = **(undefined8 **)(lVar2 + 0xb8);
  if (lVar4 == 0) {
    FUN_03f95ac8(DAT_091c00e8);
    lVar4 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  CookingGraph_CompositeStructureTranslator__<SlotsOf>g__Walk_8_0
            (uVar1,1,uVar5,uVar6,**(undefined8 **)(lVar2 + 0xb8),&local_70);
  return uStack_68;
}

