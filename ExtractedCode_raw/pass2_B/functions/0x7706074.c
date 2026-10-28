// rea decompile_all
// name: Newtonsoft.Json.Converters.DiscriminatedUnionConverter$$WriteJson
// address: 0x7706074
// body: available
// range: 0x7706074-0x7706537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7706430 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706524 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706530 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706534 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_DiscriminatedUnionConverter__WriteJson
               (undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  if ((DAT_09522961 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09183ba8);
    FUN_03f5c2a4(&DAT_091caa70);
    FUN_03f5c2a4(&DAT_09179458);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091bd420);
    FUN_03f5c2a4(&DAT_091bd430);
    FUN_03f5c2a4(&DAT_091e8e58);
    FUN_03f5c2a4(&DAT_09190160);
    FUN_03f5c2a4(&DAT_091fe6b0);
    FUN_03f5c2a4(&DAT_09202958);
    DAT_09522961 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09190160);
  System_Object___ctor(lVar1,0);
  if (param_3 == 0) {
    if (param_2 == (long *)0x0) goto LAB_07706520;
    puVar8 = (undefined8 *)(*param_2 + 0x658);
    puVar9 = (undefined8 *)(*param_2 + 0x660);
    goto LAB_077064f8;
  }
  if (param_4 == (long *)0x0) goto LAB_07706520;
  plVar2 = (long *)(**(code **)(*param_4 + 0x3a8))(param_4,*(undefined8 *)(*param_4 + 0x3b0));
  if (plVar2 == (long *)0x0) {
LAB_07706194:
    plVar2 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09183878 + 0x130)) goto LAB_07706194;
    if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09183878 + 0x130) * 8 + -8) !=
        DAT_09183878) {
      plVar2 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_09183ba8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar11 = *(long *)(*(long *)(DAT_09183ba8 + 0xb8) + 8);
  uVar3 = System_Object__GetType(param_3,0);
  if (lVar11 != 0) {
    uVar3 = FUN_06361088(lVar11,uVar3,DAT_091bd420);
    if ((**(long **)(DAT_09183ba8 + 0xb8) != 0) &&
       (lVar11 = FUN_06361088(**(long **)(DAT_09183ba8 + 0xb8),uVar3,DAT_091bd430), lVar11 != 0)) {
      lVar13 = *(long *)(lVar11 + 0x10);
      plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (plVar4 != (long *)0x0) {
        lVar5 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar5 == 0) {
LAB_07706528:
          uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,0);
        }
        if ((int)plVar4[3] == 0) {
LAB_07706524:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4[4] = param_3;
        thunk_FUN_03f5d7b8(plVar4 + 4,param_3);
        if (((lVar13 != 0) &&
            (plVar4 = (long *)Newtonsoft_Json_Utilities_FSharpFunction__Invoke(lVar13,plVar4,0),
            lVar1 != 0)) && (plVar4 != (long *)0x0)) {
          if (*(long *)(*plVar4 + 0x40) != *(long *)(DAT_09535420 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          puVar6 = (undefined4 *)thunk_FUN_03f99594();
          uVar3 = DAT_09179458;
          uVar12 = *(undefined8 *)(lVar11 + 0x18);
          *(undefined4 *)(lVar1 + 0x10) = *puVar6;
          uVar3 = thunk_FUN_03f9944c(uVar3);
          FUN_05322d94(uVar3,lVar1,DAT_091e8e58,0);
          lVar1 = FUN_04affee4(uVar12,uVar3,DAT_091caa70);
          if (param_2 != (long *)0x0) {
            (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
            uVar3 = DAT_091fe6b0;
            if (plVar2 != (long *)0x0) {
              uVar3 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                                (plVar2,DAT_091fe6b0,0);
            }
            (**(code **)(*param_2 + 0x5d8))(param_2,uVar3,*(undefined8 *)(*param_2 + 0x5e0));
            if (lVar1 != 0) {
              (**(code **)(*param_2 + 0x698))
                        (param_2,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(*param_2 + 0x6a0));
              if ((*(long *)(lVar1 + 0x20) != 0) && (*(long *)(*(long *)(lVar1 + 0x20) + 0x18) != 0)
                 ) {
                lVar1 = *(long *)(lVar1 + 0x28);
                plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
                if (plVar4 == (long *)0x0) goto LAB_07706520;
                lVar11 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar4 + 0x40));
                if (lVar11 == 0) goto LAB_07706528;
                if ((int)plVar4[3] == 0) goto LAB_07706524;
                plVar4[4] = param_3;
                thunk_FUN_03f5d7b8(plVar4 + 4,param_3);
                if (lVar1 == 0) goto LAB_07706520;
                lVar1 = Newtonsoft_Json_Utilities_FSharpFunction__Invoke(lVar1,plVar4,0);
                uVar3 = DAT_09180318;
                if (plVar2 == (long *)0x0) {
                  if (lVar1 == 0) {
                    lVar11 = 0;
                    uVar12 = DAT_09202958;
                  }
                  else {
                    lVar11 = thunk_FUN_03f99350(lVar1,DAT_09180318);
                    uVar12 = DAT_09202958;
                    if (lVar11 == 0) goto LAB_07706428;
                  }
                }
                else {
                  if (lVar1 == 0) {
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = thunk_FUN_03f99350(lVar1,DAT_09180318);
                    if (lVar11 == 0) {
LAB_07706428:
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0(lVar1,uVar3);
                    }
                  }
                  uVar12 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                                     (plVar2,DAT_09202958,0);
                }
                (**(code **)(*param_2 + 0x5d8))(param_2,uVar12,*(undefined8 *)(*param_2 + 0x5e0));
                (**(code **)(*param_2 + 0x598))(param_2,*(undefined8 *)(*param_2 + 0x5a0));
                if (lVar11 == 0) goto LAB_07706520;
                if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
                  uVar10 = 0;
                  uVar7 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
                  do {
                    if (uVar7 <= uVar10) goto LAB_07706524;
                    Newtonsoft_Json_JsonSerializer__Serialize
                              (param_4,param_2,*(undefined8 *)(lVar11 + 0x20 + uVar10 * 8),0);
                    uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
                    uVar10 = uVar10 + 1;
                  } while ((long)uVar10 < (long)(int)*(uint *)(lVar11 + 0x18));
                }
                (**(code **)(*param_2 + 0x5a8))(param_2,*(undefined8 *)(*param_2 + 0x5b0));
              }
              puVar8 = (undefined8 *)(*param_2 + 0x588);
              puVar9 = (undefined8 *)(*param_2 + 0x590);
LAB_077064f8:
                    /* WARNING: Could not recover jumptable at 0x0770651c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar8)(param_2,*puVar9);
              return;
            }
          }
        }
      }
    }
  }
LAB_07706520:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

