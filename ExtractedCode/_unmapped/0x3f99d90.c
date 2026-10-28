// rea decompile_all
// name: FUN_03f99d90
// address: 0x3f99d90
// body: available
// range: 0x3f99d90-0x3f99ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f99d90(long param_1,long param_2)

{
  void *pvVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte local_38 [8];
  ulong local_30;
  void *local_28;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_03f922d0(local_38,param_2);
    uVar8 = local_30;
    bVar2 = local_38[0];
    uVar4 = FUN_03fbe820(DAT_09535460,1);
    uVar5 = (uint)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar5 = (uint)uVar8;
    }
    uVar4 = FUN_03f984e4(uVar4,(long)(int)(uVar5 + 1));
    FUN_03f5ef9c(param_1 + 0x10,uVar4);
    bVar3 = (local_38[0] & 1) == 0;
    lVar6 = *(long *)(param_1 + 0x10);
    uVar8 = (ulong)(local_38[0] >> 1);
    if (!bVar3) {
      uVar8 = local_30;
    }
    if (0 < (int)uVar8) {
      lVar7 = 0;
      do {
        pvVar1 = (void *)((ulong)local_38 | 2);
        if (!bVar3) {
          pvVar1 = local_28;
        }
        *(undefined2 *)(lVar6 + 0x20 + lVar7 * 2) = *(undefined2 *)((long)pvVar1 + lVar7 * 2);
        lVar7 = lVar7 + 1;
        bVar3 = (local_38[0] & 1) == 0;
        uVar8 = (ulong)(local_38[0] >> 1);
        if (!bVar3) {
          uVar8 = local_30;
        }
      } while (lVar7 < (int)uVar8);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(lVar6 + ((long)(uVar8 << 0x20) >> 0x1f) + 0x20) = 0;
    uVar5 = (uint)(local_38[0] >> 1);
    if ((local_38[0] & 1) != 0) {
      uVar5 = (uint)local_30;
    }
    *(uint *)(param_1 + 0x20) = uVar5;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if ((local_38[0] & 1) != 0) {
      operator_delete(local_28);
    }
  }
  return;
}

