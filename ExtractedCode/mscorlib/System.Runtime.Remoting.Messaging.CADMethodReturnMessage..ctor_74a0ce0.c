// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMethodReturnMessage$$.ctor
// address: 0x74a0ce0
// body: available
// range: 0x74a0ce0-0x74a109f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a109c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_CADMethodReturnMessage___ctor(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *local_38;
  
  if ((DAT_0952137e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09182188);
    FUN_03f5c2a4(&DAT_09186078);
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_091860b0);
    DAT_0952137e = 1;
  }
  local_38 = (long *)0x0;
  System_Runtime_Remoting_Messaging_CADMessageBase___ctor(param_1,param_2);
  local_38 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09186078) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_074a0dbc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_09186078,0);
LAB_074a0dbc:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    uVar1 = System_Runtime_Remoting_Messaging_CADMessageBase__MarshalProperties(uVar3,&local_38);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091860b0) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_074a0e2c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860b0,2);
LAB_074a0e2c:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    uVar3 = System_Runtime_Remoting_Messaging_CADMessageBase__MarshalArgument(uVar3,uVar3,&local_38)
    ;
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    thunk_FUN_03f5d7b8();
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091860a8) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_074a0ea4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,1);
LAB_074a0ea4:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    uVar3 = System_Runtime_Remoting_Messaging_CADMessageBase__MarshalArguments
                      (uVar3,uVar3,&local_38);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    thunk_FUN_03f5d7b8();
    uVar3 = System_Runtime_Remoting_Messaging_CADMessageBase__GetMethod(param_1);
    uVar3 = System_Runtime_Remoting_Messaging_CADMessageBase__GetSignature(uVar3,1);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    thunk_FUN_03f5d7b8();
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091860b0) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_074a0f38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860b0,0);
LAB_074a0f38:
    lVar5 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (lVar5 != 0) {
      if (local_38 == (long *)0x0) {
        plVar4 = (long *)thunk_FUN_03f9944c(DAT_09181588);
        System_Collections_ArrayList___ctor(plVar4,0);
        local_38 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_074a109c;
      }
      uVar1 = (**(code **)(*local_38 + 0x298))(local_38,*(undefined8 *)(*local_38 + 0x2a0));
      lVar5 = thunk_FUN_03f9944c(DAT_09182188);
      System_Object___ctor(lVar5,0);
      *(undefined4 *)(lVar5 + 0x10) = uVar1;
      *(long *)(param_1 + 0x40) = lVar5;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),lVar5);
      plVar4 = local_38;
      lVar5 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091860b0) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_074a1010;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860b0,0);
LAB_074a1010:
      uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
      if (plVar4 == (long *)0x0) goto LAB_074a109c;
      (**(code **)(*plVar4 + 0x308))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x310));
    }
    System_Runtime_Remoting_Messaging_CADMessageBase__SaveLogicalCallContext
              (param_1,param_2,&local_38);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x418))(local_38,*(undefined8 *)(*local_38 + 0x420));
      plVar4 = (long *)System_Runtime_Remoting_Channels_CADSerializer__SerializeObject();
      if (plVar4 == (long *)0x0) goto LAB_074a109c;
      uVar3 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
    }
    return;
  }
LAB_074a109c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

