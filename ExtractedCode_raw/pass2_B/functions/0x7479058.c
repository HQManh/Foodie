// rea decompile_all
// name: System.Security.Principal.WindowsIdentity$$System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
// address: 0x7479058
// body: available
// range: 0x7479058-0x747933b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74792ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74792f0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7479338 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Principal_WindowsIdentity__System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
               (long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((DAT_0952122e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091735d0);
    FUN_03f5c2a4(&DAT_0918d090);
    FUN_03f5c2a4(&DAT_0918d0a0);
    FUN_03f5c2a4(&DAT_0921f020);
    FUN_03f5c2a4(&DAT_0921f008);
    FUN_03f5c2a4(&DAT_0921efe0);
    FUN_03f5c2a4(&DAT_0921f018);
    FUN_03f5c2a4(&DAT_0921eff8);
    DAT_0952122e = 1;
  }
  lVar5 = DAT_09535430;
  lVar10 = *(long *)(param_1 + 0x98);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
  if ((lVar10 != 0) &&
     (plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                 (lVar10,DAT_0921f020,uVar2,0), plVar3 != (long *)0x0)) {
    if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_09535430 + 0x40)) {
LAB_074792f0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    puVar4 = (undefined8 *)thunk_FUN_03f99594();
    *(undefined8 *)(param_1 + 0x78) = *puVar4;
    if (*(long *)(param_1 + 0x98) != 0) {
      lVar5 = System_Runtime_Serialization_SerializationInfo__GetString
                        (*(long *)(param_1 + 0x98),DAT_0921f008,0);
      plVar3 = (long *)(param_1 + 0x90);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      if (*plVar3 == 0) {
        if (*(int *)(DAT_0918d0a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = thunk_FUN_03f96754(uVar2);
        *plVar3 = lVar5;
        thunk_FUN_03f5d7b8(plVar3,lVar5);
        if (*plVar3 == 0) {
          thunk_FUN_03fc39d4(&DAT_0918a948);
          uVar2 = thunk_FUN_03f9944c();
          puVar7 = &DAT_09210a88;
          goto LAB_07479310;
        }
      }
      else {
        if (*(int *)(DAT_0918d0a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = thunk_FUN_03f96754(uVar2);
        uVar6 = System_String__op_Inequality(uVar2,*plVar3,0);
        if ((uVar6 & 1) != 0) {
          thunk_FUN_03fc39d4(&DAT_0918a948);
          uVar2 = thunk_FUN_03f9944c();
          puVar7 = &DAT_09210aa8;
LAB_07479310:
          uVar9 = thunk_FUN_03fc39d4(puVar7);
          System_Runtime_Serialization_SerializationException___ctor(uVar2,uVar9,0);
          uVar9 = thunk_FUN_03fc39d4(&DAT_091df368);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,uVar9);
        }
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        uVar2 = System_Runtime_Serialization_SerializationInfo__GetString
                          (*(long *)(param_1 + 0x98),DAT_0921f018,0);
        *(undefined8 *)(param_1 + 0x80) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x80),uVar2);
        uVar2 = DAT_091735d0;
        lVar5 = *(long *)(param_1 + 0x98);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
        if ((lVar5 != 0) &&
           (plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                       (lVar5,DAT_0921efe0,uVar2,0), plVar3 != (long *)0x0)) {
          if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_0918d090 + 0x40)) goto LAB_074792f0;
          puVar8 = (undefined4 *)thunk_FUN_03f99594();
          *(undefined4 *)(param_1 + 0x88) = *puVar8;
          if (*(long *)(param_1 + 0x98) != 0) {
            bVar1 = System_Runtime_Serialization_SerializationInfo__GetBoolean
                              (*(long *)(param_1 + 0x98),DAT_0921eff8,0);
            *(byte *)(param_1 + 0x8c) = bVar1 & 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

