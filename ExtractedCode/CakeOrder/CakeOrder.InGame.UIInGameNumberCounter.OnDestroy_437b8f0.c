// rea decompile_all
// name: CakeOrder.InGame.UIInGameNumberCounter$$OnDestroy
// address: 0x437b8f0
// body: available
// range: 0x437b8f0-0x437ba87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInGameNumberCounter__OnDestroy(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  
  if ((DAT_09517941 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a3008);
    FUN_03f5c2a4(&DAT_091a3010);
    FUN_03f5c2a4(&DAT_091a3018);
    FUN_03f5c2a4(&DAT_09185e58);
    FUN_03f5c2a4(&DAT_091ad400);
    FUN_03f5c2a4(&DAT_091dcbd0);
    DAT_09517941 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_057e185c(&local_68,*(long *)(param_1 + 0x68),DAT_091ad400);
    while (uVar2 = FUN_071bd28c(&local_68,DAT_091a3010), plVar1 = local_58, (uVar2 & 1) != 0) {
      if (local_58 != (long *)0x0) {
        uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar3,param_1,DAT_091dcbd0,0);
        lVar5 = *plVar1;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185e58) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_0437ba4c;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185e58,3);
LAB_0437ba4c:
        (*(code *)*puVar4)(plVar1,uVar3,puVar4[1]);
      }
    }
    FUN_071bd288(&local_68,DAT_091a3008);
  }
  return;
}

