// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
// address: 0x76c31fc
// body: available
// range: 0x76c31fc-0x76c346b inclusive
// range: 0x76c3540-0x76c3547 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c3468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c3540 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c3544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
               int param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((DAT_095226e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_095226e4 = 1;
  }
  if (param_7 != 0) {
    uVar8 = *(ulong *)(param_7 + 0x18);
    uVar7 = (uint)uVar8;
    lVar4 = FUN_03f5c394(DAT_091801b8,uVar7 + 1);
    if (0 < (int)uVar7) {
      uVar1 = *(uint *)(param_7 + 0x18);
      uVar6 = 0;
      do {
        if (uVar1 == uVar6) goto LAB_076c3540;
        if (lVar4 == 0) goto LAB_076c3544;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_076c3540;
        *(undefined4 *)(lVar4 + 0x20 + uVar6 * 4) = *(undefined4 *)(param_7 + 0x20 + uVar6 * 4);
        uVar6 = uVar6 + 1;
      } while ((uVar8 & 0xffffffff) != uVar6);
    }
    if ((param_2 != (long *)0x0) &&
       ((**(code **)(*param_2 + 0x598))(param_2,*(undefined8 *)(*param_2 + 0x5a0)), param_3 != 0)) {
      iVar2 = System_Array__GetLowerBound(param_3,uVar8 & 0xffffffff,0);
      iVar3 = System_Array__GetUpperBound(param_3,uVar8 & 0xffffffff,0);
      if (iVar2 <= iVar3) {
        if (lVar4 == 0) goto LAB_076c3544;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_076c3540:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(int *)(lVar4 + (long)(int)uVar7 * 4 + 0x20) = iVar2;
          iVar3 = System_Array__get_Rank(param_3,0);
          if (iVar3 == *(int *)(lVar4 + 0x18)) {
            lVar5 = System_Array__GetValue(param_3,lVar4,0);
            if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(param_4 + 0x98);
            if (lVar9 == 0) {
              if (lVar5 == 0) {
                lVar9 = 0;
              }
              else {
                lVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract
                                  (param_1,lVar5);
              }
            }
            uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
                              (param_1,lVar5,0,lVar9,param_4,param_5);
            if ((uVar6 & 1) == 0) {
              uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
                                (param_1,param_2,lVar5,0,lVar9,param_4,param_5);
              if ((uVar6 & 1) != 0) {
                Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
                          (param_1,param_2,lVar5,lVar9,0,param_4,param_5);
              }
            }
            else {
              Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference
                        (param_1,param_2,lVar5);
            }
          }
          else {
            Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
                      (param_1,param_2,param_3,param_4,param_5,param_6 + 1,lVar4);
          }
          iVar2 = iVar2 + 1;
          iVar3 = System_Array__GetUpperBound(param_3,uVar8 & 0xffffffff,0);
        } while (iVar2 <= iVar3);
      }
      (**(code **)(*param_2 + 0x5a8))(param_2,*(undefined8 *)(*param_2 + 0x5b0));
      return;
    }
  }
LAB_076c3544:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

