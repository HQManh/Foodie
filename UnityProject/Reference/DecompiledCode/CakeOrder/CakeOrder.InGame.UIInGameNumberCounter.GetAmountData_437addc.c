// rea decompile_all
// name: CakeOrder.InGame.UIInGameNumberCounter$$GetAmountData
// address: 0x437addc
// body: available
// range: 0x437addc-0x437af2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_InGame_UIInGameNumberCounter__GetAmountData(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_0951793c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3008);
    FUN_03f5c2a4(&DAT_091a3010);
    FUN_03f5c2a4(&DAT_091a3018);
    FUN_03f5c2a4(&DAT_09185e58);
    FUN_03f5c2a4(&DAT_091ad400);
    DAT_0951793c = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0x68) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_057e185c(&local_48,*(long *)(param_1 + 0x68),DAT_091ad400);
    iVar7 = 0;
    while (uVar3 = FUN_071bd28c(&local_48,DAT_091a3010), plVar1 = local_38, (uVar3 & 1) != 0) {
      if (local_38 != (long *)0x0) {
        lVar5 = *local_38;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185e58) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_0437aef0;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_38,DAT_09185e58,1);
LAB_0437aef0:
        iVar2 = (*(code *)*puVar4)(plVar1,puVar4[1]);
        iVar7 = iVar2 + iVar7;
      }
    }
    FUN_071bd288(&local_48,DAT_091a3008);
  }
  return iVar7;
}

