// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ReadChannel
// address: 0x7484348
// body: available
// range: 0x7484348-0x748470b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74846bc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74846c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74846c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7484708 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ConfigHandler__ReadChannel(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if ((DAT_09521278 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182488);
    FUN_03f5c2a4(&DAT_09194970);
    FUN_03f5c2a4(&DAT_09189ec0);
    FUN_03f5c2a4(&DAT_092216c0);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_0921a458);
    FUN_03f5c2a4(&DAT_09224510);
    DAT_09521278 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09182488);
  System_Runtime_Remoting_ChannelData___ctor();
  if (param_2 == (long *)0x0) {
LAB_074846c0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar10 = 0;
  do {
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09194970) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_07484464;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,4);
LAB_07484464:
    lVar4 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (lVar4 == 0) goto LAB_074846c0;
    if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar10) {
      if ((param_3 & 1) == 0) {
        plVar3 = *(long **)(param_1 + 0x18);
        if (plVar3 == (long *)0x0) goto LAB_074846c0;
        (**(code **)(*plVar3 + 0x308))(plVar3,lVar1,*(undefined8 *)(*plVar3 + 0x310));
      }
      else {
        if (lVar1 == 0) goto LAB_074846c0;
        if ((*(long *)(lVar1 + 0x20) == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
          thunk_FUN_03fc39d4(&DAT_09189ec8);
          uVar8 = thunk_FUN_03f9944c();
          uVar9 = thunk_FUN_03fc39d4(&DAT_0921d188);
          System_Runtime_Remoting_RemotingException___ctor(uVar8,uVar9);
          uVar9 = thunk_FUN_03fc39d4(&DAT_091c5c60);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar9);
        }
        if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Runtime_Remoting_RemotingConfiguration__RegisterChannelTemplate(lVar1);
      }
      *(long *)(param_1 + 0x20) = lVar1;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),lVar1);
      return;
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09194970) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_074844d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,4);
LAB_074844d0:
    lVar4 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (lVar4 == 0) goto LAB_074846c0;
    if (*(uint *)(lVar4 + 0x18) <= uVar10) {
LAB_074846c4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar8 = *(undefined8 *)(lVar4 + uVar10 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09194970) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_07484544;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,5);
LAB_07484544:
    lVar4 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (lVar4 == 0) goto LAB_074846c0;
    if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_074846c4;
    uVar9 = *(undefined8 *)(lVar4 + uVar10 * 8 + 0x20);
    uVar6 = System_String__op_Equality(uVar8,DAT_092216c0,0);
    if (((uVar6 & 1) == 0) || ((param_3 & 1) != 0)) {
      uVar6 = System_String__op_Equality(uVar8,DAT_0921a458,0);
      if ((uVar6 & 1) != 0) {
        if (lVar1 != 0) {
          *(undefined8 *)(lVar1 + 0x28) = uVar9;
          lVar4 = lVar1 + 0x28;
          goto LAB_07484604;
        }
        goto LAB_074846c0;
      }
      uVar6 = System_String__op_Equality(uVar8,DAT_0921d180,0);
      if (((uVar6 & 1) != 0) && ((param_3 & 1) != 0)) {
        if (lVar1 != 0) {
          *(undefined8 *)(lVar1 + 0x20) = uVar9;
          lVar4 = lVar1 + 0x20;
          goto LAB_07484604;
        }
        goto LAB_074846c0;
      }
      uVar6 = System_String__op_Equality(uVar8,DAT_09224510,0);
      if ((uVar6 & 1) != 0) {
        if (lVar1 != 0) {
          *(undefined8 *)(lVar1 + 0x18) = uVar9;
          lVar4 = lVar1 + 0x18;
          goto LAB_07484604;
        }
        goto LAB_074846c0;
      }
      if ((lVar1 == 0) ||
         (plVar3 = (long *)System_Runtime_Remoting_ChannelData__get_CustomProperties(lVar1),
         plVar3 == (long *)0x0)) goto LAB_074846c0;
      (**(code **)(*plVar3 + 0x2a8))(plVar3,uVar8,uVar9,*(undefined8 *)(*plVar3 + 0x2b0));
    }
    else {
      if (lVar1 == 0) goto LAB_074846c0;
      lVar4 = lVar1 + 0x10;
      *(undefined8 *)(lVar1 + 0x10) = uVar9;
LAB_07484604:
      thunk_FUN_03f5d7b8(lVar4,uVar9);
    }
    uVar10 = uVar10 + 1;
  } while( true );
}

