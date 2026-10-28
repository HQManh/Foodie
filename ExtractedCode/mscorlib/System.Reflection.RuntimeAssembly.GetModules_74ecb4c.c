// rea decompile_all
// name: System.Reflection.RuntimeAssembly$$GetModules
// address: 0x74ecb4c
// body: available
// range: 0x74ecb4c-0x74ecce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74eccdc to 0x57e28a4 FUN_057e28a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74ecce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ecce4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Reflection_RuntimeAssembly__GetModules(long *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_095215f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae8c8);
    FUN_03f5c2a4(&DAT_091ae8d0);
    FUN_03f5c2a4(&DAT_091ae8c0);
    FUN_03f5c2a4(&DAT_0917c780);
    DAT_095215f3 = 1;
  }
  lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
  if ((param_2 & 1) != 0) {
    return lVar3;
  }
  if (lVar3 != 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917c780);
    FUN_057e0478(lVar4,*(undefined4 *)(lVar3 + 0x18),DAT_091ae8c0);
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar8 = *(long **)(lVar3 + 0x20 + lVar9 * 8);
        if (plVar8 == (long *)0x0) goto LAB_074ecce0;
        uVar5 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
        lVar2 = DAT_091ae8c8;
        if ((uVar5 & 1) == 0) {
          if (lVar4 == 0) goto LAB_074ecce0;
          lVar7 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_074ecce0;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *puVar6 = plVar8;
            thunk_FUN_03f5d7b8(puVar6,plVar8);
          }
          else {
            FUN_057e0c68(lVar4,plVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
    if (lVar4 != 0) {
      lVar3 = FUN_057e28a4(lVar4,DAT_091ae8d0);
      return lVar3;
    }
  }
LAB_074ecce0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

