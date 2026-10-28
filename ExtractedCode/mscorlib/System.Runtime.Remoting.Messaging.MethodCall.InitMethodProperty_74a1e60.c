// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodCall$$InitMethodProperty
// address: 0x74a1e60
// body: available
// range: 0x74a1e60-0x74a229f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a227c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a2288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2290 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a229c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MethodCall__InitMethodProperty
               (long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09521395 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09187ca0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09216aa8);
    FUN_03f5c2a4(&DAT_09216a70);
    FUN_03f5c2a4(&DAT_09216af8);
    FUN_03f5c2a4(&DAT_09216ac8);
    FUN_03f5c2a4(&DAT_09216af0);
    FUN_03f5c2a4(&DAT_09216ac0);
    FUN_03f5c2a4(&DAT_09216a78);
    DAT_09521395 = 1;
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(param_2,0);
  plVar4 = param_3;
  if (uVar1 < 0x60836d57) {
    if (uVar1 == 0x3b0ce67b) {
      uVar2 = System_String__op_Equality(param_2,DAT_09216af8,0);
      lVar3 = DAT_09535468;
      if ((uVar2 & 1) == 0) goto LAB_074a21a0;
      if (param_3 == (long *)0x0) {
        param_1 = param_1 + 2;
        *param_1 = 0;
        goto LAB_074a2270;
      }
      if (*param_3 != DAT_09535468) goto LAB_074a228c;
      param_1 = param_1 + 2;
      *param_1 = (long)param_3;
    }
    else {
      if (uVar1 != 0x47a3b61a) {
        if ((uVar1 != 0x60836d56) ||
           (uVar2 = System_String__op_Equality(param_2,DAT_09216a70,0), uVar8 = DAT_09180318,
           (uVar2 & 1) == 0)) goto LAB_074a21a0;
        if (param_3 == (long *)0x0) {
          plVar4 = (long *)0x0;
          param_1 = param_1 + 5;
          *param_1 = 0;
          goto LAB_074a2270;
        }
        lVar3 = thunk_FUN_03f99350(param_3,DAT_09180318);
        uVar7 = DAT_09180318;
        if (lVar3 == 0) goto LAB_074a2294;
        param_1 = param_1 + 5;
        *param_1 = lVar3;
        goto LAB_074a2134;
      }
      uVar2 = System_String__op_Equality(param_2,DAT_09216a78,0);
      lVar3 = DAT_09187ca0;
      if ((uVar2 & 1) == 0) {
LAB_074a21a0:
        plVar4 = (long *)(**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185a20) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_074a2214;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a20,1);
LAB_074a2214:
                    /* WARNING: Could not recover jumptable at 0x074a2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar4,param_2,param_3,puVar5[1]);
        return;
      }
      if (param_3 == (long *)0x0) {
        param_1 = param_1 + 8;
        *param_1 = 0;
        goto LAB_074a2270;
      }
      if (*param_3 != DAT_09187ca0) goto LAB_074a228c;
      param_1 = param_1 + 8;
      *param_1 = (long)param_3;
    }
  }
  else if (uVar1 < 0xa9e9e289) {
    if (uVar1 == 0xa9e9e288) {
      uVar2 = System_String__op_Equality(param_2,DAT_09216aa8,0);
      uVar8 = DAT_09180748;
      if ((uVar2 & 1) == 0) goto LAB_074a21a0;
      if (param_3 == (long *)0x0) {
        plVar4 = (long *)0x0;
        param_1 = param_1 + 10;
        *param_1 = 0;
        goto LAB_074a2270;
      }
      lVar3 = thunk_FUN_03f99350(param_3,DAT_09180748);
      uVar7 = DAT_09180748;
      if (lVar3 == 0) goto LAB_074a2294;
      param_1 = param_1 + 10;
      *param_1 = lVar3;
LAB_074a2134:
      plVar4 = (long *)thunk_FUN_03f99350(param_3,uVar7);
      uVar8 = uVar7;
      if (plVar4 == (long *)0x0) {
LAB_074a2294:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3,uVar8);
      }
      goto LAB_074a2270;
    }
    if ((uVar1 != 0x77d05180) ||
       (uVar2 = System_String__op_Equality(param_2,DAT_09216af0,0), lVar3 = DAT_09535468,
       (uVar2 & 1) == 0)) goto LAB_074a21a0;
    if (param_3 == (long *)0x0) {
      param_1 = param_1 + 3;
      *param_1 = 0;
      goto LAB_074a2270;
    }
    if (*param_3 != DAT_09535468) goto LAB_074a228c;
    param_1 = param_1 + 3;
    *param_1 = (long)param_3;
  }
  else {
    if (uVar1 != 0xbcb90279) {
      if ((uVar1 != 0xdb4b0f38) ||
         (uVar2 = System_String__op_Equality(param_2,DAT_09216ac8,0), uVar8 = DAT_09180748,
         (uVar2 & 1) == 0)) goto LAB_074a21a0;
      if (param_3 == (long *)0x0) {
        plVar4 = (long *)0x0;
        param_1 = param_1 + 6;
        *param_1 = 0;
        goto LAB_074a2270;
      }
      lVar3 = thunk_FUN_03f99350(param_3,DAT_09180748);
      uVar7 = DAT_09180748;
      if (lVar3 == 0) goto LAB_074a2294;
      param_1 = param_1 + 6;
      *param_1 = lVar3;
      goto LAB_074a2134;
    }
    uVar2 = System_String__op_Equality(param_2,DAT_09216ac0,0);
    lVar3 = DAT_09535468;
    if ((uVar2 & 1) == 0) goto LAB_074a21a0;
    if (param_3 == (long *)0x0) {
      param_1 = param_1 + 4;
      *param_1 = 0;
      goto LAB_074a2270;
    }
    if (*param_3 != DAT_09535468) goto LAB_074a228c;
    param_1 = param_1 + 4;
    *param_1 = (long)param_3;
  }
  if (*param_3 != lVar3) {
LAB_074a228c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_3);
  }
LAB_074a2270:
  thunk_FUN_03f5d7b8(param_1,plVar4);
  return;
}

