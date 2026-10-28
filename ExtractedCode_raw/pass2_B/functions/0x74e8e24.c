// rea decompile_all
// name: System.Reflection.Assembly$$InternalGetSatelliteAssembly
// address: 0x74e8e24
// body: available
// range: 0x74e8e24-0x74e8ffb inclusive
// range: 0x74e9044-0x74e916b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e8ff4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e8ff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e9160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e9168 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_Assembly__InternalGetSatelliteAssembly
                 (long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((DAT_095215cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181610);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_0918a360);
    FUN_03f5c2a4(&DAT_091f9340);
    DAT_095215cf = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09181610);
  System_Object___ctor(lVar2,0);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  lVar3 = (**(code **)(*param_1 + 0x298))(param_1,1,*(undefined8 *)(*param_1 + 0x2a0));
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x48);
    *(long *)(lVar2 + 0x48) = lVar3;
    uVar1 = *(uint *)(lVar2 + 0x38) ^ 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x38) | 1;
    }
    *(uint *)(lVar2 + 0x38) = uVar1;
    thunk_FUN_03f5d7b8();
    lVar3 = (**(code **)(*param_1 + 0x298))(param_1,1,*(undefined8 *)(*param_1 + 0x2a0));
    if (lVar3 != 0) {
      *(uint *)(lVar2 + 0x38) = *(uint *)(lVar3 + 0x38) | 1;
      uVar4 = System_Version__op_Equality(param_4,0,0);
      if ((uVar4 & 1) != 0) {
        lVar3 = (**(code **)(*param_1 + 0x298))(param_1,1,*(undefined8 *)(*param_1 + 0x2a0));
        if (lVar3 == 0) goto LAB_074e9160;
        param_4 = *(undefined8 *)(lVar3 + 0x60);
      }
      System_Reflection_AssemblyName__set_Version(lVar2,param_4);
      *(long *)(lVar2 + 0x30) = (long)param_3;
      thunk_FUN_03f5d7b8((long *)(lVar2 + 0x30),param_3);
      puVar9 = (undefined8 *)(lVar2 + 0x10);
      *puVar9 = param_2;
      thunk_FUN_03f5d7b8(puVar9,param_2);
      lVar3 = thunk_FUN_03f6aadc(0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar5 = (long *)System_AppDomain__LoadSatellite(lVar3,lVar2,0,param_6,0);
      uVar4 = System_Reflection_Assembly__op_Inequality(plVar5,0);
      if ((uVar4 & 1) == 0) {
        uVar6 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
        uVar4 = System_String__IsNullOrEmpty(uVar6,0);
        plVar5 = (long *)0x0;
        if ((uVar4 & 1) == 0) {
          uVar6 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188f20);
          }
          uVar6 = System_IO_Path__GetDirectoryName(uVar6,0);
          if (param_3 == (long *)0x0) goto LAB_074e9160;
          uVar7 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
          uVar8 = System_String__Concat(*puVar9,DAT_091f9340,0);
          uVar7 = System_IO_Path__Combine(uVar7,uVar8,0);
          uVar6 = System_IO_Path__Combine(uVar6,uVar7,0);
          plVar5 = (long *)FUN_03f652d8(uVar6,0,param_6);
          if (plVar5 != (long *)0x0) {
            if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a360 + 0x130)) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a360 + 0x130) * 8 + -8
                         ) != DAT_0918a360)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar5);
            }
          }
        }
      }
      else if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a360 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a360 + 0x130) * 8 + -8) !=
            DAT_0918a360)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
      }
      return plVar5;
    }
  }
LAB_074e9160:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

