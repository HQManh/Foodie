// rea decompile_all
// name: Datpt.Cook_Order.CookOrderHelper2D$$ClosestPoint
// address: 0x41ab710
// body: available
// range: 0x41ab710-0x41ab843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ab840 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Datpt_Cook_Order_CookOrderHelper2D__ClosestPoint(float param_1,float param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = param_2;
  uVar1 = Datpt_Cook_Order_CookOrderHelper2D__Contains();
  if ((uVar1 & 1) != 0) {
    return param_1;
  }
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    uVar2 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x10),0);
    if (*(long *)(param_3 + 0x18) != 0) {
      fVar8 = fVar7;
      uVar3 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x18),0);
      if (*(long *)(param_3 + 0x28) != 0) {
        fVar9 = fVar8;
        uVar4 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x28),0);
        if (*(long *)(param_3 + 0x20) != 0) {
          fVar10 = fVar9;
          uVar5 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x20),0);
          fVar11 = param_2;
          fVar6 = (float)Datpt_Cook_Order_CookOrderHelper2D__ClosestPointInTriangle
                                   (param_1,param_2,uVar2,fVar7,uVar3,fVar8,uVar4,fVar9);
          fVar8 = param_2;
          fVar7 = (float)Datpt_Cook_Order_CookOrderHelper2D__ClosestPointInTriangle
                                   (param_1,param_2,uVar2,fVar7,uVar4,fVar9,uVar5,fVar10);
          if ((param_1 - fVar6) * (param_1 - fVar6) + (param_2 - fVar11) * (param_2 - fVar11) <
              (param_1 - fVar7) * (param_1 - fVar7) + (param_2 - fVar8) * (param_2 - fVar8)) {
            return fVar6;
          }
          return fVar7;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

