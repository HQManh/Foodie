// rea decompile_all
// name: System.IO.Stream$$BeginEndWriteAsync
// address: 0x757f260
// body: available
// range: 0x757f260-0x757f43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Stream__BeginEndWriteAsync
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_09521acc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091799d0);
    FUN_03f5c2a4(&DAT_09179c70);
    FUN_03f5c2a4(&DAT_091bc858);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091f0550);
    FUN_03f5c2a4(&DAT_091f0558);
    FUN_03f5c2a4(&DAT_09194bf0);
    DAT_09521acc = 1;
  }
  local_58 = 0;
  local_60 = param_2;
  thunk_FUN_03f5d7b8(&local_60,param_2);
  uVar1 = local_60;
  local_58 = CONCAT44(param_4,param_3);
  uVar2 = local_58;
  if (*(int *)(DAT_09194bf0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_09194bf0 + 0xb8);
  lVar5 = puVar4[8];
  if (lVar5 == 0) {
    if (*(int *)(DAT_09194bf0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_09194bf0 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = thunk_FUN_03f9944c(DAT_09179c70);
    FUN_05337094(lVar5,uVar6,DAT_091f0550,0);
    plVar3 = (long *)(*(long *)(DAT_09194bf0 + 0xb8) + 0x40);
    *plVar3 = lVar5;
    thunk_FUN_03f5d7b8(plVar3,lVar5);
  }
  if (*(int *)(DAT_09194bf0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_09194bf0 + 0xb8);
  lVar7 = puVar4[9];
  if (lVar7 == 0) {
    if (*(int *)(DAT_09194bf0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_09194bf0 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar7 = thunk_FUN_03f9944c(DAT_091799d0);
    FUN_05331bac(lVar7,uVar6,DAT_091f0558,0);
    plVar3 = (long *)(*(long *)(DAT_09194bf0 + 0xb8) + 0x48);
    *plVar3 = lVar7;
    thunk_FUN_03f5d7b8(plVar3,lVar7);
  }
  FUN_048af564(param_1,uVar1,uVar2,lVar5,lVar7,DAT_091bc858);
  return;
}

