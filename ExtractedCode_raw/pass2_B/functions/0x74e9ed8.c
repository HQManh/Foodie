// rea decompile_all
// name: System.Reflection.AssemblyName$$.ctor
// address: 0x74e9ed8
// body: available
// range: 0x74e9ed8-0x74ea46f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ea308 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ea43c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74ea454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ea460 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ea46c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_AssemblyName___ctor(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  
  if ((DAT_095215d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170ec0);
    FUN_03f5c2a4(&DAT_091815f8);
    FUN_03f5c2a4(&DAT_09170ed0);
    FUN_03f5c2a4(&DAT_09181618);
    FUN_03f5c2a4(&DAT_09170ed8);
    FUN_03f5c2a4(&DAT_09181628);
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09172f50);
    FUN_03f5c2a4(&DAT_0918b440);
    FUN_03f5c2a4(&DAT_09173528);
    FUN_03f5c2a4(&DAT_0918cc90);
    FUN_03f5c2a4(&DAT_09216920);
    FUN_03f5c2a4(&DAT_09215ec8);
    FUN_03f5c2a4(&DAT_09214de8);
    FUN_03f5c2a4(&DAT_09214ed0);
    FUN_03f5c2a4(&DAT_09216598);
    FUN_03f5c2a4(&DAT_09215ec0);
    FUN_03f5c2a4(&DAT_09215428);
    FUN_03f5c2a4(&DAT_09216918);
    FUN_03f5c2a4(&DAT_09215720);
    FUN_03f5c2a4(&DAT_09215be8);
    DAT_095215d5 = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 != 0) {
    uVar3 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_09215be8,0);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    thunk_FUN_03f5d7b8();
    uVar3 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_09214de8,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_03f5d7b8();
    uVar3 = DAT_09173528;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                               (param_2,DAT_09216918,uVar3,0);
    lVar6 = DAT_0918cc90;
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else if ((*plVar4 != DAT_0918cc90) || (*(long **)(param_1 + 0x60) = plVar4, *plVar4 != lVar6))
    goto LAB_074ea304;
    thunk_FUN_03f5d7b8(param_1 + 0x60,plVar4);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170bb0,0);
    plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                               (param_2,DAT_09215ec0,uVar3,0);
    lVar6 = DAT_0917fc88;
    if (plVar4 == (long *)0x0) {
      lVar6 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      lVar5 = thunk_FUN_03f99350(plVar4,DAT_0917fc88);
      lVar8 = DAT_0917fc88;
      if (lVar5 == 0) goto LAB_074ea458;
      *(long *)(param_1 + 0x48) = lVar5;
      lVar6 = thunk_FUN_03f99350(plVar4,lVar8);
      if (lVar6 == 0) goto LAB_074ea46c;
    }
    thunk_FUN_03f5d7b8(param_1 + 0x48,lVar6);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170bb0,0);
    plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                               (param_2,DAT_09215ec8,uVar3,0);
    lVar6 = DAT_0917fc88;
    if (plVar4 == (long *)0x0) {
      lVar6 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
      lVar5 = thunk_FUN_03f99350(plVar4,DAT_0917fc88);
      lVar8 = DAT_0917fc88;
      if (lVar5 == 0) {
LAB_074ea458:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4,lVar6);
      }
      *(long *)(param_1 + 0x50) = lVar5;
      lVar6 = thunk_FUN_03f99350(plVar4,lVar8);
      if (lVar6 == 0) goto LAB_074ea46c;
    }
    thunk_FUN_03f5d7b8(param_1 + 0x50,lVar6);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09170ec0,0);
    plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                               (param_2,DAT_09215720,uVar3,0);
    if (plVar4 != (long *)0x0) {
      lVar8 = DAT_091815f8;
      if (*(long *)(*plVar4 + 0x40) == *(long *)(DAT_091815f8 + 0x40)) {
        puVar7 = (undefined4 *)thunk_FUN_03f99594();
        uVar3 = DAT_09172f50;
        *(undefined4 *)(param_1 + 0x3c) = *puVar7;
        uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
        plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                   (param_2,DAT_09216598,uVar3,0);
        lVar6 = DAT_0918b440;
        if (plVar4 == (long *)0x0) {
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        else {
          bVar1 = *(byte *)(DAT_0918b440 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918b440)) {
LAB_074ea304:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar4);
          }
          *(long **)(param_1 + 0x40) = plVar4;
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar6))
          goto LAB_074ea304;
        }
        thunk_FUN_03f5d7b8(param_1 + 0x40,plVar4);
        uVar3 = System_Type__GetTypeFromHandle(DAT_09170ed8,0);
        plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                   (param_2,DAT_09216920,uVar3,0);
        if (plVar4 == (long *)0x0) goto LAB_074ea454;
        lVar8 = DAT_09181628;
        if (*(long *)(*plVar4 + 0x40) == *(long *)(DAT_09181628 + 0x40)) {
          puVar7 = (undefined4 *)thunk_FUN_03f99594();
          uVar3 = DAT_09170ed0;
          *(undefined4 *)(param_1 + 0x58) = *puVar7;
          uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
          plVar4 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                                     (param_2,DAT_09215428,uVar3,0);
          if (plVar4 == (long *)0x0) goto LAB_074ea454;
          lVar8 = DAT_09181618;
          if (*(long *)(*plVar4 + 0x40) == *(long *)(DAT_09181618 + 0x40)) {
            puVar7 = (undefined4 *)thunk_FUN_03f99594();
            uVar3 = DAT_09214ed0;
            *(undefined4 *)(param_1 + 0x38) = *puVar7;
            iVar2 = System_Runtime_Serialization_SerializationInfo__GetInt32(param_2,uVar3,0);
            if (iVar2 == -1) {
              return;
            }
            uVar3 = thunk_FUN_03f9944c(DAT_09182ff8);
            System_Globalization_CultureInfo___ctor(uVar3,iVar2,0);
            *(undefined8 *)(param_1 + 0x30) = uVar3;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar3);
            return;
          }
        }
      }
LAB_074ea46c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4,lVar8);
    }
  }
LAB_074ea454:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

