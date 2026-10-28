// rea decompile_all
// name: AnhPD.Home.HomeBuilding$$OnSetup
// address: 0x41d0334
// body: available
// range: 0x41d0334-0x41d044f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d041c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d044c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] AnhPD_Home_HomeBuilding__OnSetup(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  if ((DAT_09516a30 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09516a30 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_041d041c;
    CakeOrder_Home_HomeMapNpcSpawnControl__SetUp
              (*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0xb0),0);
  }
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    lVar4 = 4;
    do {
      uVar5 = (int)lVar4 - 4;
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar5) {
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        return *(undefined1 (*) [16])(*(long *)(DAT_0918c610 + 0xb8) + 0x10);
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_041d044c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(long *)(lVar2 + lVar4 * 8) == 0) break;
      AnhPD_Home_HomeBuildingSection__ActivateHidden();
      lVar2 = *(long *)(param_1 + 0x78);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_041d044c;
      lVar2 = *(long *)(lVar2 + lVar4 * 8);
      if (lVar2 == 0) break;
      AnhPD_Home_HomeBuildingSection__SetParticleAppear(lVar2,*(undefined8 *)(param_1 + 0x98));
      lVar2 = *(long *)(param_1 + 0x78);
      lVar4 = lVar4 + 1;
    } while (lVar2 != 0);
  }
LAB_041d041c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

