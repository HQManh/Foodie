// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ReadProvider
// address: 0x748470c
// body: available
// range: 0x748470c-0x7484b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7484ac8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7484acc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7484b10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Remoting_ConfigHandler__ReadProvider
               (long param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_09521279 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184920);
    FUN_03f5c2a4(&DAT_09194970);
    FUN_03f5c2a4(&DAT_091897c0);
    FUN_03f5c2a4(&DAT_0918acc8);
    FUN_03f5c2a4(&DAT_0918b0e8);
    FUN_03f5c2a4(&DAT_09221248);
    FUN_03f5c2a4(&DAT_092216c0);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_09221d20);
    FUN_03f5c2a4(&DAT_09224510);
    DAT_09521279 = 1;
  }
  uVar1 = System_String__op_Equality(param_2,DAT_09221248,0);
  puVar5 = &DAT_091897c0;
  if ((uVar1 & 1) == 0) {
    puVar5 = &DAT_09184920;
  }
  lVar2 = thunk_FUN_03f9944c(*puVar5);
  System_Runtime_Remoting_ProviderData___ctor();
  lVar3 = thunk_FUN_03f9944c(DAT_0918acc8);
  System_Runtime_Remoting_Channels_SinkProviderData___ctor(lVar3,DAT_09221d20,0);
  if ((lVar3 != 0) && (lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar3 + 0x18);
    thunk_FUN_03f5d7b8();
    lVar4 = thunk_FUN_03f9944c(DAT_0918b0e8);
    System_Collections_Stack___ctor(lVar4,0);
    plVar8 = (long *)(param_1 + 0x28);
    *plVar8 = lVar4;
    thunk_FUN_03f5d7b8(plVar8,lVar4);
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x268))(plVar8,lVar3,*(undefined8 *)(*plVar8 + 0x270));
      if (param_3 != (long *)0x0) {
        uVar1 = 0;
        do {
          lVar3 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09194970) {
                puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                goto LAB_07484900;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,4);
LAB_07484900:
          lVar3 = (*(code *)*puVar5)(param_3,puVar5[1]);
          if (lVar3 == 0) break;
          if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar1) {
            if ((*(long *)(lVar2 + 0x20) == 0) && ((param_4 & 1) != 0)) {
              thunk_FUN_03fc39d4(&DAT_09189ec8);
              uVar9 = thunk_FUN_03f9944c();
              uVar10 = thunk_FUN_03fc39d4(&DAT_0921d188);
              System_Runtime_Remoting_RemotingException___ctor(uVar9,uVar10);
              uVar10 = thunk_FUN_03fc39d4(&DAT_091c5c88);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar9,uVar10);
            }
            return lVar2;
          }
          lVar3 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09194970) {
                puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                goto LAB_0748496c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,4);
LAB_0748496c:
          lVar3 = (*(code *)*puVar5)(param_3,puVar5[1]);
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_07484acc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar4 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          uVar9 = *(undefined8 *)(lVar3 + uVar1 * 8 + 0x20);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09194970) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                goto LAB_074849e0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,5);
LAB_074849e0:
          lVar3 = (*(code *)*puVar5)(param_3,puVar5[1]);
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_07484acc;
          uVar10 = *(undefined8 *)(lVar3 + uVar1 * 8 + 0x20);
          uVar6 = System_String__op_Equality(uVar9,DAT_0921d180,0);
          if (((uVar6 & 1) == 0) || ((param_4 & 1) == 0)) {
            uVar6 = System_String__op_Equality(uVar9,DAT_09224510,0);
            if ((uVar6 & 1) != 0) {
              *(undefined8 *)(lVar2 + 0x18) = uVar10;
              lVar3 = lVar2 + 0x18;
              goto LAB_07484a68;
            }
            uVar6 = System_String__op_Equality(uVar9,DAT_092216c0,0);
            if (((uVar6 & 1) != 0) && ((param_4 & 1) == 0)) {
              *(undefined8 *)(lVar2 + 0x10) = uVar10;
              lVar3 = lVar2 + 0x10;
              goto LAB_07484a68;
            }
            plVar8 = *(long **)(lVar2 + 0x28);
            if (plVar8 == (long *)0x0) break;
            (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar9,uVar10,*(undefined8 *)(*plVar8 + 0x2b0));
          }
          else {
            lVar3 = lVar2 + 0x20;
            *(undefined8 *)(lVar2 + 0x20) = uVar10;
LAB_07484a68:
            thunk_FUN_03f5d7b8(lVar3,uVar10);
          }
          uVar1 = uVar1 + 1;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

