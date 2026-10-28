// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$Write
// address: 0x74c498c
// body: available
// range: 0x74c498c-0x74c4d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c4a54 to 0x74c4eb4 System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$WriteArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c4a9c to 0x74be3dc System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteObjectString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c4c7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c4cbc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c4d20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectWriter__Write
               (long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_68;
  long local_60;
  long local_58;
  
  if ((DAT_095214a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09180848);
    DAT_095214a7 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  if (param_2 == 0) goto LAB_074c4c7c;
  plVar6 = *(long **)(param_2 + 0x18);
  if (plVar6 == (long *)0x0) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_09209418);
    uVar2 = System_Environment__GetResourceString(uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09220220);
    System_ArgumentNullException___ctor(uVar3,uVar4,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d50d0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
  lVar8 = *(long *)(param_2 + 0x20);
  uVar5 = *(ulong *)(param_2 + 0x68);
  if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar8 == *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38)) {
    if (param_3 != 0) {
      *(ulong *)(param_3 + 0x18) = uVar5;
      lVar8 = *(long *)(param_1 + 0x40);
      uVar2 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      if (lVar8 != 0) {
        System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteObjectString
                  (lVar8,uVar5 & 0xffffffff,uVar2);
        return;
      }
    }
    goto LAB_074c4c7c;
  }
  if (*(char *)(param_2 + 0x2b) != '\0') {
    System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArray(param_1,param_2,param_3)
    ;
    return;
  }
  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__GetMemberInfo
            (param_2,&local_58,&local_60,&local_68);
  if (*(char *)(param_2 + 0x28) == '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_074c4c7c;
    if ((*(byte *)(*(long *)(param_1 + 0x68) + 0x10) & 1) != 0) goto LAB_074c4acc;
  }
  else {
LAB_074c4acc:
    if (param_3 == 0) goto LAB_074c4c7c;
    *(undefined1 *)(param_3 + 0x3b) = 1;
    *(undefined1 *)(param_3 + 0x3d) = 1;
    if (param_4 == 0) goto LAB_074c4c7c;
    *(undefined1 *)(param_4 + 0x3b) = 1;
    *(undefined1 *)(param_4 + 0x3d) = 1;
  }
  if ((local_58 != 0) &&
     (lVar8 = FUN_03f5c394(DAT_09180848,*(undefined4 *)(local_58 + 0x18)), local_60 != 0)) {
    uVar5 = 0;
    do {
      if ((long)(int)*(uint *)(local_60 + 0x18) <= (long)uVar5) {
        System_Runtime_Serialization_Formatters_Binary_ObjectWriter__Write
                  (param_1,param_2,param_3,param_4,local_58,local_60,local_68,lVar8);
        return;
      }
      if (*(uint *)(local_60 + 0x18) <= uVar5) goto LAB_074c4cbc;
      lVar7 = *(long *)(local_60 + uVar5 * 8 + 0x20);
      if (lVar7 == 0) {
        if (local_68 == 0) break;
        if (*(uint *)(local_68 + 0x18) <= uVar5) goto LAB_074c4cbc;
        lVar7 = *(long *)(local_68 + uVar5 * 8 + 0x20);
        if (lVar7 == 0) {
          if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0xc0);
        }
        else {
          lVar7 = System_Object__GetType(lVar7,0);
        }
      }
      iVar1 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__ToCode(param_1,lVar7);
      if (iVar1 == 0) {
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar7 != *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38)) {
          if (local_68 == 0) break;
          if (*(uint *)(local_68 + 0x18) <= uVar5) {
LAB_074c4cbc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar7 = *(long *)(local_68 + uVar5 * 8 + 0x20);
          if (lVar7 == 0) {
            if (local_60 == 0) break;
            if (*(uint *)(local_60 + 0x18) <= uVar5) goto LAB_074c4cbc;
            lVar7 = System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__Serialize
                              (*(undefined8 *)(local_60 + uVar5 * 8 + 0x20),
                               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                               *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x78),
                               *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x70));
          }
          else {
            lVar7 = System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__Serialize
                              (lVar7,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)
                               ,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x78),
                               *(undefined8 *)(param_1 + 0x80),param_1,
                               *(undefined8 *)(param_1 + 0x70));
          }
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_074c4cbc;
          plVar6 = (long *)(lVar8 + uVar5 * 8 + 0x20);
          *plVar6 = lVar7;
          thunk_FUN_03f5d7b8(lVar8 + 0x20 + uVar5 * 8);
          if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_074c4cbc;
          lVar7 = *plVar6;
          uVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetAssemblyId
                            (param_1,lVar7);
          if (lVar7 == 0) break;
          *(undefined8 *)(lVar7 + 0x70) = uVar2;
        }
      }
      uVar5 = uVar5 + 1;
    } while (local_60 != 0);
  }
LAB_074c4c7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

