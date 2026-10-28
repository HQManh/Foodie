// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$IsErrorHandled
// address: 0x76b0ca4
// body: available
// range: 0x76b0ca4-0x76b1063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b1060 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Newtonsoft_Json_Serialization_JsonSerializerInternalBase__IsErrorHandled
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,long *param_7)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  if ((bRam00000000095226a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184148);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187348);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091721b0);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_092017d0);
    FUN_03f5c2a4(&DAT_092019e8);
    FUN_03f5c2a4(&DAT_091f8f70);
    bRam00000000095226a3 = 1;
  }
  lVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext
                    (param_1,param_2,param_4,param_6,param_7);
  plVar11 = *(long **)(param_1 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09186850) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076b0dd0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,0);
LAB_076b0dd0:
    iVar2 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((0 < iVar2) && (*(char *)(lVar3 + 0x10) == '\0')) {
      *(undefined1 *)(lVar3 + 0x10) = 1;
      uVar6 = System_Object__GetType(param_1,0);
      uVar5 = _DAT_091721b0;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
      uVar9 = System_Type__op_Equality(uVar6,uVar5,0);
      uVar5 = DAT_091f5a98;
      puVar4 = (undefined8 *)&DAT_092019e8;
      if ((uVar9 & 1) == 0) {
        puVar4 = (undefined8 *)&DAT_092017d0;
      }
      uVar6 = *puVar4;
      if (param_3 != 0) {
        plVar11 = *(long **)(param_3 + 0x60);
        if (plVar11 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        }
        uVar6 = System_String__Concat(uVar6,uVar5,uVar7,0);
      }
      if (param_7 == (long *)0x0) goto LAB_076b1060;
      uVar5 = (**(code **)(*param_7 + 0x188))(param_7,*(undefined8 *)(*param_7 + 400));
      uVar5 = System_String__Concat(uVar6,DAT_091f8f70,uVar5,0);
      if ((*(byte *)(*param_7 + 0x130) < *(byte *)(DAT_09187348 + 0x130)) ||
         (*(long *)(*(long *)(*param_7 + 200) + (ulong)*(byte *)(DAT_09187348 + 0x130) * 8 + -8) !=
          DAT_09187348)) {
        if (*(int *)(DAT_09187398 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Newtonsoft_Json_JsonPosition__FormatMessage(param_5,param_6,uVar5,0);
      }
      plVar11 = *(long **)(param_1 + 0x28);
      if (plVar11 == (long *)0x0) goto LAB_076b1060;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09186850) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_076b1040;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,1);
LAB_076b1040:
      (*(code *)*puVar4)(plVar11,1,uVar5,param_7,puVar4[1]);
    }
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    plVar11 = *(long **)(param_1 + 0x20);
    if (plVar11 == (long *)0x0) goto LAB_076b1060;
    auVar12 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
    Newtonsoft_Json_Serialization_JsonContract__InvokeOnError
              (param_3,param_2,auVar12._0_8_,auVar12._8_8_,lVar3);
  }
  if (*(char *)(lVar3 + 0x38) == '\0') {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar5 = thunk_FUN_03f9944c(_DAT_09184148);
    Newtonsoft_Json_Serialization_ErrorEventArgs___ctor(uVar5,param_2,lVar3);
    if (lVar8 == 0) {
LAB_076b1060:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Newtonsoft_Json_JsonSerializer__OnError(lVar8,uVar5,0);
    bVar1 = *(char *)(lVar3 + 0x38) != '\0';
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

