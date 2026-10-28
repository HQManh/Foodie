// rea decompile_all
// name: FUN_03fad12c
// address: 0x3fad12c
// body: available
// range: 0x3fad12c-0x3fad21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fad12c(code *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  code *local_50;
  undefined8 uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  plVar1 = (long *)FUN_03f98698();
  puVar7 = (undefined8 *)*plVar1;
  puVar4 = (undefined8 *)plVar1[1];
  if (puVar7 != puVar4) {
    do {
      lVar5 = *(long *)*puVar7;
      if (*(int *)(lVar5 + 0x18) != 0) {
        uVar6 = 0;
        do {
          thunk_FUN_03fab57c(lVar5,uVar6);
          lVar2 = thunk_FUN_03fab9dc();
          if (((lVar2 != 0) && ((*(ushort *)(lVar2 + 0x135) >> 8 & 1) != 0)) &&
             (uVar3 = FUN_03fbf79c(lVar2), (uVar3 & 1) == 0)) {
            (*param_1)(lVar2,param_2);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(lVar5 + 0x18));
        puVar4 = (undefined8 *)plVar1[1];
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar4);
  }
  FUN_03f7ae84(0x3fad0e8,&local_50);
  FUN_03f7ad50(0x3fad0e8,&local_50);
  FUN_03f77870(0x3fad0e8,&local_50);
  FUN_03fc39dc(0x3fad0e8,&local_50);
  return;
}

