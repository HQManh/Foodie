// rea decompile_all
// name: LiveOpsR1.LiveOpsManager$$CheckEventHaveNoti
// address: 0x735eb14
// body: available
// range: 0x735eb14-0x735ec43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong LiveOpsR1_LiveOpsManager__CheckEventHaveNoti(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09520842 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185fb0);
    DAT_09520842 = 1;
  }
  plVar3 = (long *)LiveOpsR1_LiveOpsManager__GetBehaviorControl(param_1,param_2);
  uVar7 = 0;
  if (plVar3 != (long *)0x0) {
    uVar4 = LiveOpsR1_LiveOpsManager__IsEventEntered(param_1,param_2);
    lVar6 = *plVar3;
    uVar1 = *(ushort *)(lVar6 + 0x12e);
    uVar7 = (ulong)uVar1;
    if ((uVar4 & 1) != 0) {
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185fb0) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0735ebf8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185fb0,2);
LAB_0735ebf8:
                    /* WARNING: Could not recover jumptable at 0x0735ec0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)*puVar5)(plVar3,puVar5[1]);
      return uVar7;
    }
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185fb0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0735ec20;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185fb0,1);
LAB_0735ec20:
    iVar2 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    uVar7 = (ulong)(2 < iVar2);
  }
  return uVar7;
}

