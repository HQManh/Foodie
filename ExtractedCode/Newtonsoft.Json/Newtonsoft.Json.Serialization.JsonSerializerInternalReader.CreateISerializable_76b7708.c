// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
// address: 0x76b7708
// body: available
// range: 0x76b7708-0x76b7db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b7bf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b7cbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b7cc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b7ccc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable
          (long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((DAT_095226be & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09187350);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918a968);
    FUN_03f5c2a4(&DAT_0918b338);
    FUN_03f5c2a4(&DAT_09211d00);
    FUN_03f5c2a4(&DAT_092007b8);
    DAT_095226be = 1;
  }
  if (param_3 == 0) goto LAB_076b7bf8;
  uVar12 = *(undefined8 *)(param_3 + 0x60);
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Newtonsoft_Json_Serialization_JsonTypeReflector__get_FullyTrusted(0);
  if ((uVar3 & 1) == 0) {
    uVar5 = System_Environment__get_NewLine(0);
    uVar6 = System_Environment__get_NewLine(0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09211180);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09210a38);
    uVar5 = System_String__Concat(uVar7,uVar5,uVar9,uVar6,0);
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  }
  else {
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09186850) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076b7864;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09186850,0);
LAB_076b7864:
      iVar1 = (*(code *)*puVar4)(plVar13,puVar4[1]);
      if (2 < iVar1) {
        if (param_2 == (long *)0x0) goto LAB_076b7bf8;
        plVar13 = *(long **)(param_1 + 0x28);
        uVar5 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                          (DAT_092007b8,uVar6,*(undefined8 *)(param_3 + 0x60));
        if (*(int *)(DAT_09187398 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187398);
        }
        uVar7 = thunk_FUN_03f99350(param_2,DAT_09185f18);
        uVar5 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar7,uVar5,uVar6,0);
        if (plVar13 == (long *)0x0) goto LAB_076b7bf8;
        lVar10 = *plVar13;
        uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09186850) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_076b7974;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09186850,1);
LAB_076b7974:
        (*(code *)*puVar4)(plVar13,3,uVar5,0,puVar4[1]);
      }
    }
    uVar6 = *(undefined8 *)(param_3 + 0x60);
    uVar5 = thunk_FUN_03f9944c(DAT_09187350);
    Newtonsoft_Json_Serialization_JsonFormatterConverter___ctor(uVar5,param_1,param_3,param_4);
    lVar10 = thunk_FUN_03f9944c(DAT_0918a968);
    System_Runtime_Serialization_SerializationInfo___ctor(lVar10,uVar6,uVar5,0);
    if (param_2 == (long *)0x0) {
LAB_076b7bf8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    do {
      iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if (iVar1 == 4) {
        plVar13 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250))
        ;
        if (plVar13 == (long *)0x0) goto LAB_076b7bf8;
        uVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        uVar3 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
        if ((uVar3 & 1) == 0) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar5 = thunk_FUN_03fc39d4(&DAT_09211d38);
          uVar12 = uVar7;
          goto LAB_076b7c90;
        }
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Newtonsoft_Json_Linq_JToken__ReadFrom(param_2,0);
        if (lVar10 == 0) goto LAB_076b7bf8;
        System_Runtime_Serialization_SerializationInfo__AddValue(lVar10,uVar7,uVar5,0);
      }
      else if (iVar1 != 5) {
        if (iVar1 == 0xd) goto LAB_076b7ad4;
        FUN_039b1d98(param_2);
        uVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        local_80 = thunk_FUN_03fc39d4(&DAT_09187478);
        uStack_78 = 0xffffffffffffffff;
        local_70 = uVar2;
        uVar12 = System_Enum__ToString(&local_80,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_09211ef8);
        uVar12 = System_String__Concat(uVar5,uVar12,0);
        goto LAB_076b7c94;
      }
      uVar3 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    } while ((uVar3 & 1) != 0);
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
              (param_1,param_2,param_3,lVar10,DAT_09211d00);
LAB_076b7ad4:
    if (*(char *)(param_3 + 0x2a) == '\0') {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_3);
      uVar12 = *(undefined8 *)(param_3 + 0x60);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091ff3f0);
    }
    else {
      lVar14 = *(long *)(param_3 + 0xc0);
      if (lVar14 != 0) {
        plVar13 = (long *)FUN_03f5c394(DAT_09180318,2);
        if (plVar13 != (long *)0x0) {
          if ((lVar10 != 0) &&
             (lVar8 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0)) {
LAB_076b7cc4:
            uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar12,0);
          }
          if ((int)plVar13[3] != 0) {
            plVar13[4] = lVar10;
            thunk_FUN_03f5d7b8(plVar13 + 4,lVar10);
            lVar10 = *(long *)(param_1 + 0x20);
            if (lVar10 == 0) goto LAB_076b7bf8;
            uStack_78 = *(undefined8 *)(lVar10 + 0x68);
            local_80 = *(undefined8 *)(lVar10 + 0x60);
            lVar10 = FUN_03f5c42c(DAT_0918b338,&local_80);
            if ((lVar10 != 0) &&
               (lVar8 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0))
            goto LAB_076b7cc4;
            if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
              plVar13[5] = lVar10;
              thunk_FUN_03f5d7b8(plVar13 + 5,lVar10);
              uVar12 = (**(code **)(lVar14 + 0x18))
                                 (*(undefined8 *)(lVar14 + 0x40),plVar13,
                                  *(undefined8 *)(lVar14 + 0x28));
              if (param_5 != 0) {
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
                          (param_1,param_2,param_5,uVar12);
              }
              Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
                        (param_1,param_2,param_3,uVar12);
              Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized
                        (param_1,param_2,param_3,uVar12);
              return uVar12;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_076b7bf8;
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_092045a8);
    }
  }
LAB_076b7c90:
  uVar12 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar6,uVar12);
LAB_076b7c94:
  uVar12 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar12,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d1ad8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar12,uVar5);
}

