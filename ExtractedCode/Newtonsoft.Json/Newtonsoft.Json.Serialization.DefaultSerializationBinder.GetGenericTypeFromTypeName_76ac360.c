// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultSerializationBinder$$GetGenericTypeFromTypeName
// address: 0x76ac360
// body: available
// range: 0x76ac360-0x76ac613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ac610 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_DefaultSerializationBinder__GetGenericTypeFromTypeName
          (undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  
  if ((DAT_09522654 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b11d0);
    FUN_03f5c2a4(&DAT_091b1208);
    FUN_03f5c2a4(&DAT_091b11c0);
    FUN_03f5c2a4(&DAT_0917cee0);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_09522654 = 1;
  }
  if (param_2 != 0) {
    iVar6 = System_String__IndexOf(param_2,0x5b,0);
    if (iVar6 < 0) {
      return 0;
    }
    uVar7 = System_String__Substring(param_2,0,iVar6,0);
    if (param_3 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*param_3 + 0x288))
                                 (param_3,uVar7,*(undefined8 *)(*param_3 + 0x290));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar9 = System_Type__op_Inequality(plVar8,0,0);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      lVar10 = thunk_FUN_03f9944c(DAT_0917cee0);
      FUN_057e0400(lVar10,DAT_091b11c0);
      uVar1 = *(uint *)(param_2 + 0x10);
      if (iVar6 + 1 < (int)(uVar1 - 1)) {
        iVar14 = 0;
        uVar12 = 0;
        uVar13 = iVar6 + 2;
        do {
          sVar5 = System_String__get_Chars(param_2,uVar13 - 1,0);
          uVar3 = uVar12;
          if (sVar5 == 0x5d) {
            iVar14 = iVar14 + -1;
            if (iVar14 == 0) {
              uVar7 = System_String__Substring(param_2,uVar12,~uVar12 + uVar13,0);
              if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09189d88);
              }
              auVar15 = Newtonsoft_Json_Utilities_ReflectionUtils__SplitFullyQualifiedTypeName
                                  (uVar7,0);
              uVar7 = Newtonsoft_Json_Serialization_DefaultSerializationBinder__GetTypeByName
                                (param_1,auVar15._0_8_,auVar15._8_8_);
              lVar2 = DAT_091b11d0;
              if (lVar10 == 0) goto LAB_076ac610;
              lVar11 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_076ac610;
              uVar12 = *(uint *)(lVar10 + 0x18);
              if (uVar12 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar12 + 1;
                *(undefined8 *)(lVar11 + (long)(int)uVar12 * 8 + 0x20) = uVar7;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar10,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              iVar14 = 0;
            }
          }
          else if ((sVar5 == 0x5b) &&
                  (bVar4 = iVar14 != 0, iVar14 = iVar14 + 1, uVar3 = uVar13, bVar4)) {
            uVar3 = uVar12;
          }
          uVar12 = uVar3;
          uVar13 = uVar13 + 1;
        } while (uVar1 != uVar13);
      }
      if ((lVar10 != 0) && (uVar7 = FUN_057e28a4(lVar10,DAT_091b1208), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x076ac5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(*plVar8 + 0x948))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x950));
        return uVar7;
      }
    }
  }
LAB_076ac610:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

