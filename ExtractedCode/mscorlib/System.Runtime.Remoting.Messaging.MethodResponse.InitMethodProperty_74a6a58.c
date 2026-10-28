// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodResponse$$InitMethodProperty
// address: 0x74a6a58
// body: available
// range: 0x74a6a58-0x74a6f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a6d80 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a6f08 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a6f0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a6f18 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MethodResponse__InitMethodProperty
               (long *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_095213b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09187ca0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09216c28);
    FUN_03f5c2a4(&DAT_09216af8);
    FUN_03f5c2a4(&DAT_09216ac8);
    FUN_03f5c2a4(&DAT_09216af0);
    FUN_03f5c2a4(&DAT_09216ac0);
    FUN_03f5c2a4(&DAT_09216ad0);
    FUN_03f5c2a4(&DAT_09216ae0);
    FUN_03f5c2a4(&DAT_09216a78);
    DAT_095213b6 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(param_2,0);
  plVar4 = param_3;
  if (uVar2 < 0x74e1fd0d) {
    if (0x47a3b61a < uVar2) {
      if (uVar2 == 0x619e9961) {
        uVar3 = System_String__op_Equality(param_2,DAT_09216ae0,0);
        if ((uVar3 & 1) == 0) goto LAB_074a6e20;
        param_1 = param_1 + 6;
        *param_1 = (long)param_3;
        goto LAB_074a6efc;
      }
      if ((uVar2 != 0x74e1fd0c) ||
         (uVar3 = System_String__op_Equality(param_2,DAT_09216ad0,0), uVar10 = DAT_09180318,
         (uVar3 & 1) == 0)) goto LAB_074a6e20;
      if (param_3 == (long *)0x0) {
        param_1 = param_1 + 10;
        *param_1 = 0;
        plVar4 = (long *)0x0;
        goto LAB_074a6efc;
      }
      lVar7 = thunk_FUN_03f99350(param_3,DAT_09180318);
      uVar9 = DAT_09180318;
      if (lVar7 == 0) goto LAB_074a6f10;
      param_1 = param_1 + 10;
      *param_1 = lVar7;
LAB_074a6cdc:
      plVar4 = (long *)thunk_FUN_03f99350(param_3,uVar9);
      uVar10 = uVar9;
      if (plVar4 == (long *)0x0) {
LAB_074a6f10:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3,uVar10);
      }
      goto LAB_074a6efc;
    }
    if (uVar2 == 0x3b0ce67b) {
      uVar3 = System_String__op_Equality(param_2,DAT_09216af8,0);
      lVar7 = DAT_09535468;
      if ((uVar3 & 1) == 0) goto LAB_074a6e20;
      if (param_3 == (long *)0x0) {
        param_1 = param_1 + 3;
        *param_1 = 0;
        goto LAB_074a6efc;
      }
      if (*param_3 != DAT_09535468) goto LAB_074a6d7c;
      param_1 = param_1 + 3;
      *param_1 = (long)param_3;
    }
    else {
      if ((uVar2 != 0x47a3b61a) ||
         (uVar3 = System_String__op_Equality(param_2,DAT_09216a78,0), lVar7 = DAT_09187ca0,
         (uVar3 & 1) == 0)) {
LAB_074a6e20:
        plVar4 = (long *)(**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185a20) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_074a6e94;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a20,1);
LAB_074a6e94:
                    /* WARNING: Could not recover jumptable at 0x074a6eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar4,param_2,param_3,puVar5[1]);
        return;
      }
      if (param_3 == (long *)0x0) {
        param_1 = param_1 + 0xd;
        *param_1 = 0;
        goto LAB_074a6efc;
      }
      if (*param_3 != DAT_09187ca0) goto LAB_074a6d7c;
      param_1 = param_1 + 0xd;
      *param_1 = (long)param_3;
    }
LAB_074a6d70:
    lVar6 = *param_3;
  }
  else {
    if (uVar2 < 0xbcb9027a) {
      if (uVar2 == 0xbcb90279) {
        uVar3 = System_String__op_Equality(param_2,DAT_09216ac0,0);
        lVar7 = DAT_09535468;
        if ((uVar3 & 1) == 0) goto LAB_074a6e20;
        if (param_3 == (long *)0x0) {
          param_1 = param_1 + 2;
          *param_1 = 0;
          goto LAB_074a6efc;
        }
        if (*param_3 != DAT_09535468) goto LAB_074a6d7c;
        param_1 = param_1 + 2;
        *param_1 = (long)param_3;
      }
      else {
        if ((uVar2 != 0x77d05180) ||
           (uVar3 = System_String__op_Equality(param_2,DAT_09216af0,0), lVar7 = DAT_09535468,
           (uVar3 & 1) == 0)) goto LAB_074a6e20;
        if (param_3 == (long *)0x0) {
          param_1 = param_1 + 4;
          *param_1 = 0;
          goto LAB_074a6efc;
        }
        if (*param_3 != DAT_09535468) goto LAB_074a6d7c;
        param_1 = param_1 + 4;
        *param_1 = (long)param_3;
      }
      goto LAB_074a6d70;
    }
    if (uVar2 != 0xd82ee215) {
      if ((uVar2 != 0xdb4b0f38) ||
         (uVar3 = System_String__op_Equality(param_2,DAT_09216ac8,0), uVar10 = DAT_09180748,
         (uVar3 & 1) == 0)) goto LAB_074a6e20;
      if (param_3 == (long *)0x0) {
        param_1 = param_1 + 8;
        *param_1 = 0;
        plVar4 = (long *)0x0;
        goto LAB_074a6efc;
      }
      lVar7 = thunk_FUN_03f99350(param_3,DAT_09180748);
      uVar9 = DAT_09180748;
      if (lVar7 == 0) goto LAB_074a6f10;
      param_1 = param_1 + 8;
      *param_1 = lVar7;
      goto LAB_074a6cdc;
    }
    uVar3 = System_String__op_Equality(param_2,DAT_09216c28,0);
    lVar7 = DAT_091842a0;
    if ((uVar3 & 1) == 0) goto LAB_074a6e20;
    if (param_3 == (long *)0x0) {
      param_1 = param_1 + 7;
      *param_1 = 0;
      goto LAB_074a6efc;
    }
    bVar1 = *(byte *)(DAT_091842a0 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091842a0))
    goto LAB_074a6d7c;
    param_1 = param_1 + 7;
    *param_1 = (long)param_3;
    if (*(byte *)(*param_3 + 0x130) < bVar1) goto LAB_074a6d7c;
    lVar6 = *(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8);
  }
  if (lVar6 != lVar7) {
LAB_074a6d7c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_3);
  }
LAB_074a6efc:
  thunk_FUN_03f5d7b8(param_1,plVar4);
  return;
}

