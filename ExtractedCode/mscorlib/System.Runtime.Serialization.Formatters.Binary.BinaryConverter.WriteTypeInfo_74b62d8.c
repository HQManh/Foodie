// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryConverter$$WriteTypeInfo
// address: 0x74b62d8
// body: available
// range: 0x74b62d8-0x74b6513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b6458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b645c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b6510 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_BinaryConverter__WriteTypeInfo
               (undefined8 param_1,long *param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong extraout_x1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar9 [16];
  int local_34;
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  iVar1 = (int)param_1;
  if ((DAT_0952144a & 1) == 0) {
    auVar9 = FUN_03f5c2a4(&DAT_09187008);
    DAT_0952144a = 1;
  }
  if (iVar1 < 4) {
    if (iVar1 - 1U < 2) {
      return;
    }
    if (iVar1 != 0) {
      if (iVar1 != 3) {
LAB_074b6460:
        uVar7 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar7,1);
        local_34 = iVar1;
        uVar8 = thunk_FUN_03fc39d4(&DAT_09181ca8);
        uVar8 = FUN_03f5c42c(uVar8,&local_34);
        uVar8 = System_Enum__ToString(uVar8,0);
        FUN_039b1d98(uVar7);
        FUN_039b0da0(uVar7,uVar8);
        FUN_039af17c(uVar7,0,uVar8);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09205bc8);
        uVar7 = System_Environment__GetResourceString(uVar8,uVar7,0);
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar8 = thunk_FUN_03f9944c();
        System_Runtime_Serialization_SerializationException___ctor(uVar8,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091c38e8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar7);
      }
      if (param_2 != (long *)0x0) {
        auVar9 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar6 = auVar9._0_8_;
        if (param_4 != 0) {
          plVar5 = *(long **)(param_4 + 0x30);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar6;
          auVar9 = auVar2 << 0x40;
          if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x074b6378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x2c8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x2d0));
            return;
          }
        }
      }
      goto LAB_074b6458;
    }
  }
  else {
    if (iVar1 - 5U < 2) {
      return;
    }
    if (iVar1 == 4) {
      if (param_2 != (long *)0x0) {
        auVar9 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar6 = auVar9._0_8_;
        if (param_4 == 0) goto LAB_074b6458;
        plVar5 = *(long **)(param_4 + 0x30);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar6;
        auVar9 = auVar3 << 0x40;
        if (plVar5 == (long *)0x0) goto LAB_074b6458;
        (**(code **)(*plVar5 + 0x2c8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x2d0));
        plVar5 = *(long **)(param_4 + 0x30);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = extraout_x1;
        auVar9 = auVar4 << 0x40;
        if (plVar5 == (long *)0x0) goto LAB_074b6458;
        uVar7 = *(undefined8 *)(*plVar5 + 0x280);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x278);
        goto LAB_074b6444;
      }
      goto LAB_074b6458;
    }
    if (iVar1 != 7) goto LAB_074b6460;
  }
  if ((param_4 != 0) && (param_2 != (long *)0x0)) {
    if (*(long *)(*param_2 + 0x40) != *(long *)(DAT_09187008 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
    auVar9 = thunk_FUN_03f99594();
    plVar5 = *(long **)(param_4 + 0x30);
    if (plVar5 != (long *)0x0) {
      param_3 = *auVar9._0_8_;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x1e8);
      uVar7 = *(undefined8 *)(*plVar5 + 0x1f0);
LAB_074b6444:
                    /* WARNING: Could not recover jumptable at 0x074b6454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar5,param_3,uVar7);
      return;
    }
  }
LAB_074b6458:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar9._0_8_,auVar9._8_8_);
}

