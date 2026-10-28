// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectMap$$.ctor
// address: 0x74b9da8
// body: available
// range: 0x74b9da8-0x74ba103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ba05c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ba060 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ba06c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ba074 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ba100 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void System_Runtime_Serialization_Formatters_Binary_ObjectMap___ctor
               (long param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7,undefined4 param_8,long param_9,long param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 local_7c [4];
  long local_78 [2];
  undefined4 local_64;
  
  if ((DAT_09521455 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181bf8);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521455 = 1;
  }
  local_64 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_7c[0] = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  System_Object___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),param_2);
  *(long *)(param_1 + 0x38) = param_3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x38),param_3);
  *(long *)(param_1 + 0x20) = param_4;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),param_4);
  *(long *)(param_1 + 0x28) = param_5;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),param_5);
  *(long *)(param_1 + 0x50) = param_7;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x50),param_7);
  *(long *)(param_1 + 0x60) = param_9;
  *(undefined4 *)(param_1 + 0x58) = param_8;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x60),param_9);
  if (param_9 == 0) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar2 = FUN_03f5c394(uVar2,1);
    FUN_039b1d98();
    FUN_039b0da0(uVar2,param_2);
    FUN_039af17c(uVar2,0,param_2);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09208978);
    uVar2 = System_Environment__GetResourceString(uVar5,uVar2,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar5 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar5,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d4f90);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar2);
  }
  if (param_7 != 0) {
    uVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetType
                      (param_7,param_9,param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8();
    if (param_3 != 0) {
      uVar2 = FUN_03f5c394(DAT_09180748,*(undefined4 *)(param_3 + 0x18));
      puVar9 = (undefined8 *)(param_1 + 0x30);
      *puVar9 = uVar2;
      thunk_FUN_03f5d7b8(puVar9,uVar2);
      if (0 < *(int *)(param_3 + 0x18)) {
        if (param_4 == 0) goto LAB_074ba05c;
        lVar8 = 8;
        lVar10 = 0x20;
        do {
          uVar7 = lVar8 - 8;
          if (*(uint *)(param_4 + 0x18) <= uVar7) {
LAB_074ba060:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (param_5 == 0) goto LAB_074ba05c;
          if (*(uint *)(param_5 + 0x18) <= uVar7) goto LAB_074ba060;
          if (param_6 == 0) goto LAB_074ba05c;
          if (*(uint *)(param_6 + 0x18) <= uVar7) goto LAB_074ba060;
          if (param_10 == 0) goto LAB_074ba05c;
          uVar1 = *(undefined4 *)(param_4 + lVar8 * 4);
          uVar2 = *(undefined8 *)(param_5 + lVar10);
          plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_SizedArray__get_Item
                                     (param_10,*(undefined4 *)(param_6 + lVar8 * 4),0);
          if (plVar3 != (long *)0x0) {
            if (*plVar3 != DAT_09181bf8) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar3);
            }
          }
          System_Runtime_Serialization_Formatters_Binary_BinaryConverter__TypeFromInfo
                    (uVar1,uVar2,param_7,plVar3,&local_64,local_78 + 1,local_78,local_7c);
          lVar6 = local_78[0];
          plVar3 = (long *)*puVar9;
          if (plVar3 == (long *)0x0) goto LAB_074ba05c;
          if ((local_78[0] != 0) &&
             (lVar4 = thunk_FUN_03f99350(local_78[0],*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          {
            uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar2,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar7) goto LAB_074ba060;
          *(long *)((long)plVar3 + lVar10) = lVar6;
          thunk_FUN_03f5d7b8((long)plVar3 + lVar10,lVar6);
          lVar6 = lVar8 + -7;
          lVar8 = lVar8 + 1;
          lVar10 = lVar10 + 8;
        } while (lVar6 < *(int *)(param_3 + 0x18));
      }
      lVar8 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__CreateReadObjectInfo
                        (param_7,*(undefined8 *)(param_1 + 0x18),param_3,0);
      plVar3 = (long *)(param_1 + 0x40);
      *plVar3 = lVar8;
      thunk_FUN_03f5d7b8(plVar3,lVar8);
      lVar8 = *plVar3;
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x2c) == '\0') {
          System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberTypes
                    (lVar8,param_3,*(undefined8 *)(lVar8 + 0x18));
        }
        return;
      }
    }
  }
LAB_074ba05c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

