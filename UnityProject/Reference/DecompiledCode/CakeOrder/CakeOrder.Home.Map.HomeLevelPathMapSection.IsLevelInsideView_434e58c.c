// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelPathMapSection$$IsLevelInsideView
// address: 0x434e58c
// body: available
// range: 0x434e58c-0x434e637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434e634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_Home_Map_HomeLevelPathMapSection__IsLevelInsideView
               (undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(long *)(param_3 + 0x40) != 0) {
    CakeOrder_Home_Map_HomeLevelPathNodesControl__GetNodePosition();
    if ((*(long *)(param_3 + 0x70) != 0) &&
       (fVar6 = param_2, lVar3 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x70),0),
       lVar3 != 0)) {
      UnityEngine_Transform__get_position(lVar3,0);
      if (*(long *)(param_3 + 0x70) != 0) {
        fVar4 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_3 + 0x70),0);
        if ((*(long *)(param_3 + 0x68) != 0) && (*(long *)(param_3 + 0x70) != 0)) {
          fVar7 = *(float *)(*(long *)(param_3 + 0x68) + 0x14);
          fVar5 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_3 + 0x70),0);
          if (*(long *)(param_3 + 0x68) != 0) {
            fVar5 = (fVar6 - fVar5) - *(float *)(*(long *)(param_3 + 0x68) + 0x14);
            bVar1 = true;
            bVar2 = false;
            if (param_2 <= fVar6 + fVar4 + fVar7) {
              bVar1 = false;
              bVar2 = true;
              if (!NAN(param_2) && !NAN(fVar5)) {
                bVar1 = param_2 < fVar5;
                bVar2 = false;
              }
            }
            return bVar1 == bVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

