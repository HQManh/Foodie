// rea decompile_all
// name: TrungKienPack.PoolCtrlObject$$Release
// address: 0x408b828
// body: available
// range: 0x408b828-0x408b983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408b968 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408b980 to 0x5e2cca0 FUN_05e2cca0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_PoolCtrlObject__Release(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_09515cd6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186320);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b8c28);
    FUN_03f5c2a4(&DAT_091b8c30);
    FUN_03f5c2a4(&DAT_091b8c40);
    DAT_09515cd6 = 1;
  }
  TrungKienPack_PoolCtrlObject__Collect(param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  while (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x20) < 1) {
      FUN_05e2cca0(lVar1,DAT_091b8c28);
      return;
    }
    plVar2 = (long *)FUN_05e2d168(lVar1,DAT_091b8c30);
    if (plVar2 == (long *)0x0) break;
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09186320) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0408b924;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09186320,0);
LAB_0408b924:
    lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar1 == 0) break;
    uVar4 = UnityEngine_Component__get_gameObject(lVar1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    UnityEngine_Object__Destroy(uVar4,0);
    lVar1 = *(long *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

