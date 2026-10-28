// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ParseElement
// address: 0x7482ba0
// body: available
// range: 0x7482ba0-0x7483a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7482d74 to 0x7483a94 System.Runtime.Remoting.ConfigHandler$$ReadCustomProviderData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74830d0 to 0x7484b14 System.Runtime.Remoting.ConfigHandler$$ReadClientWellKnown (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74834b0 to 0x7483df4 System.Runtime.Remoting.ConfigHandler$$ReadLifetine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7483544 to 0x7484ffc System.Runtime.Remoting.ConfigHandler$$ReadInteropXml (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7483644 to 0x7482424 System.Runtime.Remoting.RemotingConfiguration$$SetCustomErrorsMode (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74836f0 to 0x7484dec System.Runtime.Remoting.ConfigHandler$$ReadClientActivated (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7483760 to 0x7482814 System.Runtime.Remoting.ConfigHandler$$ValidatePath (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74837d4 to 0x74851a0 System.Runtime.Remoting.ConfigHandler$$ReadPreload (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74837f0 to 0x7484c08 System.Runtime.Remoting.ConfigHandler$$ReadServiceWellKnown (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7483870 to 0x7484348 System.Runtime.Remoting.ConfigHandler$$ReadChannel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x748388c to 0x7484f30 System.Runtime.Remoting.ConfigHandler$$ReadServiceActivated (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7483930 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoRetur
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ConfigHandler__ParseElement
               (long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  
  if ((DAT_09521274 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09194970);
    FUN_03f5c2a4(&DAT_09189ec0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09225100);
    FUN_03f5c2a4(&DAT_09223928);
    FUN_03f5c2a4(&DAT_09218ad0);
    FUN_03f5c2a4(&DAT_09225760);
    FUN_03f5c2a4(&DAT_09217838);
    FUN_03f5c2a4(&DAT_09221248);
    FUN_03f5c2a4(&DAT_0921a370);
    FUN_03f5c2a4(&DAT_0921d6f0);
    FUN_03f5c2a4(&DAT_09222f30);
    FUN_03f5c2a4(&DAT_092170b8);
    FUN_03f5c2a4(&DAT_09218ab0);
    FUN_03f5c2a4(&DAT_09218ad8);
    FUN_03f5c2a4(&DAT_09220f38);
    FUN_03f5c2a4(&DAT_09219fd8);
    FUN_03f5c2a4(&DAT_09218da0);
    FUN_03f5c2a4(&DAT_09218ae0);
    FUN_03f5c2a4(&DAT_0921f8a0);
    FUN_03f5c2a4(&DAT_0921e7b0);
    FUN_03f5c2a4(&DAT_0921d6e8);
    FUN_03f5c2a4(&DAT_09222340);
    FUN_03f5c2a4(&DAT_0921ba88);
    FUN_03f5c2a4(&DAT_09218da8);
    FUN_03f5c2a4(&DAT_09218ac0);
    FUN_03f5c2a4(&DAT_09222348);
    FUN_03f5c2a4(&DAT_09217828);
    FUN_03f5c2a4(&DAT_09218ae8);
    FUN_03f5c2a4(&DAT_09217830);
    FUN_03f5c2a4(&DAT_09218ac8);
    DAT_09521274 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Runtime_Remoting_ConfigHandler__ReadCustomProviderData(param_1,param_2,param_3);
    return;
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(param_2,0);
  if (uVar1 < 0x709b3919) {
    if (0x4fc0c298 < uVar1) {
      if (uVar1 < 0x56dfde65) {
        if (uVar1 == 0x5212abee) {
          uVar3 = System_String__op_Equality(param_2,DAT_0921e7b0,0);
          if ((uVar3 & 1) != 0) {
            lVar4 = FUN_03f5c394(DAT_091805f8,1);
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x18) != 0) {
                *(undefined8 *)(lVar4 + 0x20) = DAT_09217828;
                thunk_FUN_03f5d7b8();
                System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
                System_Runtime_Remoting_ConfigHandler__ReadLifetine(param_1,param_3);
                return;
              }
              goto LAB_07483a88;
            }
            goto LAB_07483a84;
          }
          goto LAB_07483a1c;
        }
        if ((uVar1 != 0x56dfde64) ||
           (uVar3 = System_String__op_Equality(param_2,DAT_09222348,0), (uVar3 & 1) == 0))
        goto LAB_07483a1c;
        lVar4 = FUN_03f5c394(DAT_091805f8,1);
        if (lVar4 == 0) goto LAB_07483a84;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07483a88;
        *(undefined8 *)(lVar4 + 0x20) = DAT_09217828;
LAB_07482ff0:
        thunk_FUN_03f5d7b8();
        goto LAB_07483750;
      }
      if (uVar1 != 0x5864ed98) {
        if (uVar1 == 0x67f06491) {
          uVar3 = System_String__op_Equality(param_2,DAT_09219fd8,0);
          if ((uVar3 & 1) != 0) {
            lVar4 = FUN_03f5c394(DAT_091805f8,1);
            if (lVar4 != 0) {
              FUN_039af17c(lVar4,0,DAT_09223928);
              System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
              if (param_3 != (long *)0x0) {
                uVar7 = FUN_039aff78(3,DAT_09194970,param_3,DAT_0921f8a0);
                if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09189ec0);
                }
                System_Runtime_Remoting_RemotingConfiguration__SetCustomErrorsMode(uVar7);
                return;
              }
            }
            goto LAB_07483a84;
          }
          goto LAB_07483a1c;
        }
        if ((uVar1 != 0x709b3918) ||
           (uVar3 = System_String__op_Equality(param_2,DAT_09218da8,0), (uVar3 & 1) == 0))
        goto LAB_07483a1c;
        lVar4 = FUN_03f5c394(DAT_091805f8,2);
        if (lVar4 == 0) goto LAB_07483a84;
        FUN_039af17c(lVar4,0,DAT_09218ac0);
        puVar6 = &DAT_09218ab0;
        goto LAB_074832ac;
      }
      puVar6 = &DAT_0921a370;
LAB_074836fc:
      uVar3 = System_String__op_Equality(param_2,*puVar6,0);
      if ((uVar3 & 1) == 0) goto LAB_07483a1c;
      lVar4 = FUN_03f5c394(DAT_091805f8,1);
      if (lVar4 == 0) goto LAB_07483a84;
      puVar6 = &DAT_09223928;
LAB_07483734:
      uVar8 = *puVar6;
      uVar7 = 0;
LAB_07483740:
      FUN_039af17c(lVar4,uVar7,uVar8);
LAB_07483750:
      System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
      return;
    }
    if (uVar1 < 0x21c252a5) {
      if (uVar1 == 0x1f47a245) {
        uVar3 = System_String__op_Equality(param_2,DAT_09217828,0);
        if ((uVar3 & 1) == 0) goto LAB_07483a1c;
        lVar4 = FUN_03f5c394(DAT_091805f8,1);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07483a88;
          *(undefined8 *)(lVar4 + 0x20) = DAT_09223928;
          thunk_FUN_03f5d7b8();
          System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
          if (param_3 != (long *)0x0) {
            lVar4 = *param_3;
            uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar3 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_09194970) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                  goto LAB_074838a0;
                }
                uVar3 = uVar3 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,4);
LAB_074838a0:
            lVar4 = (*(code *)*puVar6)(param_3,puVar6[1]);
            if (lVar4 != 0) {
              if (*(long *)(lVar4 + 0x18) == 0) {
                return;
              }
              lVar4 = FUN_039afee4(5,DAT_09194970,param_3);
              if (lVar4 != 0) {
                if (*(int *)(lVar4 + 0x18) != 0) {
                  uVar7 = *(undefined8 *)(lVar4 + 0x20);
                  puVar6 = (undefined8 *)(param_1 + 0x38);
                  *puVar6 = uVar7;
                  goto LAB_0748391c;
                }
                goto LAB_07483a88;
              }
            }
          }
        }
      }
      else {
        if ((uVar1 != 0x21c252a4) ||
           (uVar3 = System_String__op_Equality(param_2,DAT_09218ab0,0), (uVar3 & 1) == 0))
        goto LAB_07483a1c;
        lVar4 = FUN_03f5c394(DAT_091805f8,1);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07483a88;
          *(undefined8 *)(lVar4 + 0x20) = DAT_09218ad8;
          thunk_FUN_03f5d7b8();
          System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
          if (*(long *)(param_1 + 0x40) != 0) {
            iVar2 = System_String__IndexOf(*(long *)(param_1 + 0x40),DAT_09217828,0);
            System_Runtime_Remoting_ConfigHandler__ReadChannel(param_1,param_3,iVar2 == -1);
            return;
          }
        }
      }
      goto LAB_07483a84;
    }
    if (uVar1 != 0x26f8dbed) {
      if ((uVar1 != 0x4fc0c298) ||
         (uVar3 = System_String__op_Equality(param_2,DAT_09225760,0), (uVar3 & 1) == 0))
      goto LAB_07483a1c;
      lVar4 = FUN_03f5c394(DAT_091805f8,2);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = DAT_09218da0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar4 + 0x28) = DAT_09222348;
            thunk_FUN_03f5d7b8();
            System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
            uVar3 = System_Runtime_Remoting_ConfigHandler__CheckPath(param_1,DAT_09218da0);
            if ((uVar3 & 1) != 0) {
              System_Runtime_Remoting_ConfigHandler__ReadClientWellKnown(param_1,param_3);
              return;
            }
            System_Runtime_Remoting_ConfigHandler__ReadServiceWellKnown(param_1,param_3);
            return;
          }
        }
        goto LAB_07483a88;
      }
      goto LAB_07483a84;
    }
    puVar6 = &DAT_0921d6e8;
  }
  else {
    if (uVar1 < 0xb7c0bbbd) {
      if (uVar1 < 0xa9212c26) {
        if (uVar1 == 0x8f929c1e) {
          uVar3 = System_String__op_Equality(param_2,DAT_09218da0,0);
          if ((uVar3 & 1) != 0) {
            lVar4 = FUN_03f5c394(DAT_091805f8,1);
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07483a88;
              *(undefined8 *)(lVar4 + 0x20) = DAT_09217828;
              thunk_FUN_03f5d7b8();
              System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
              uVar7 = DAT_09225100;
              if (param_3 != (long *)0x0) {
                lVar4 = *param_3;
                uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar3 != 0) {
                  piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_09194970) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                      goto LAB_07483904;
                    }
                    uVar3 = uVar3 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar3 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,3);
LAB_07483904:
                uVar7 = (*(code *)*puVar6)(param_3,uVar7,puVar6[1]);
                puVar6 = (undefined8 *)(param_1 + 0x30);
                *puVar6 = uVar7;
LAB_0748391c:
                thunk_FUN_03f5d7b8(puVar6,uVar7);
                return;
              }
            }
            goto LAB_07483a84;
          }
          goto LAB_07483a1c;
        }
        if (uVar1 != 0xa9212c25) goto LAB_07483a1c;
        puVar6 = &DAT_0921ba88;
      }
      else {
        if (uVar1 == 0xaadddf7c) {
          uVar3 = System_String__op_Equality(param_2,DAT_092170b8,0);
          if ((uVar3 & 1) != 0) {
            lVar4 = FUN_03f5c394(DAT_091805f8,2);
            if (lVar4 != 0) {
              FUN_039af17c(lVar4,0,DAT_09218da0);
              FUN_039af17c(lVar4,1,DAT_09222348);
              System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
              uVar3 = System_Runtime_Remoting_ConfigHandler__CheckPath(param_1,DAT_09218da0);
              if ((uVar3 & 1) != 0) {
                System_Runtime_Remoting_ConfigHandler__ReadClientActivated(param_1,param_3);
                return;
              }
              System_Runtime_Remoting_ConfigHandler__ReadServiceActivated(param_1,param_3);
              return;
            }
            goto LAB_07483a84;
          }
          goto LAB_07483a1c;
        }
        if (uVar1 == 0xb21d976b) {
          uVar3 = System_String__op_Equality(param_2,DAT_09222f30,0);
          if ((uVar3 & 1) == 0) goto LAB_07483a1c;
          lVar4 = FUN_03f5c394(DAT_091805f8,1);
          if (lVar4 == 0) goto LAB_07483a84;
          puVar6 = &DAT_09217828;
          goto LAB_07483734;
        }
        if (uVar1 != 0xb7c0bbbc) goto LAB_07483a1c;
        puVar6 = &DAT_09221248;
      }
      uVar3 = System_String__op_Equality(param_2,*puVar6,0);
      if ((uVar3 & 1) == 0) goto LAB_07483a1c;
      uVar3 = System_Runtime_Remoting_ConfigHandler__CheckPath(param_1,DAT_09217838);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = System_Runtime_Remoting_ConfigHandler__CheckPath(param_1,DAT_09218ae8),
         (uVar3 & 1) == 0)) {
        uVar3 = System_Runtime_Remoting_ConfigHandler__CheckPath(param_1,DAT_09217830);
        if (((uVar3 & 1) == 0) &&
           (uVar3 = System_Runtime_Remoting_ConfigHandler__CheckPath(param_1,DAT_09218ae0),
           (uVar3 & 1) == 0)) {
          uVar3 = System_Runtime_Remoting_ConfigHandler__CheckPath(param_1,DAT_09218ad0);
          if ((uVar3 & 1) != 0) {
            uVar7 = System_Runtime_Remoting_ConfigHandler__ReadProvider(param_1,param_2,param_3,1);
            if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189ec0);
            }
            System_Runtime_Remoting_RemotingConfiguration__RegisterServerProviderTemplate(uVar7);
            return;
          }
          uVar3 = System_Runtime_Remoting_ConfigHandler__CheckPath(param_1,DAT_09218ac8);
          if ((uVar3 & 1) != 0) {
            uVar7 = System_Runtime_Remoting_ConfigHandler__ReadProvider(param_1,param_2,param_3,1);
            if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189ec0);
            }
            System_Runtime_Remoting_RemotingConfiguration__RegisterClientProviderTemplate(uVar7);
            return;
          }
          lVar4 = FUN_03eabcb4(DAT_091c0310);
          goto LAB_07483750;
        }
        uVar7 = System_Runtime_Remoting_ConfigHandler__ReadProvider(param_1,param_2,param_3,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_07483a84;
        plVar5 = (long *)System_Runtime_Remoting_ChannelData__get_ClientProviders
                                   (*(long *)(param_1 + 0x20));
      }
      else {
        uVar7 = System_Runtime_Remoting_ConfigHandler__ReadProvider(param_1,param_2,param_3,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_07483a84;
        plVar5 = (long *)System_Runtime_Remoting_ChannelData__get_ServerProviders
                                   (*(long *)(param_1 + 0x20));
      }
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0748319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x308))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x310));
        return;
      }
      goto LAB_07483a84;
    }
    if (0xd8e50294 < uVar1) {
      if (uVar1 == 0xf06cf3e6) {
        uVar3 = System_String__op_Equality(param_2,DAT_09220f38,0);
        if ((uVar3 & 1) != 0) {
          lVar4 = FUN_03f5c394(DAT_091805f8,1);
          if (lVar4 != 0) {
            FUN_039af17c(lVar4,0,DAT_09222f30);
            uVar7 = System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
            System_Runtime_Remoting_ConfigHandler__ReadPreload(uVar7,param_3);
            return;
          }
          goto LAB_07483a84;
        }
        goto LAB_07483a1c;
      }
      if (uVar1 == 0xf9980127) {
        puVar6 = &DAT_09218ac0;
        goto LAB_074836fc;
      }
      if ((uVar1 != 0xfbe86875) ||
         (uVar3 = System_String__op_Equality(param_2,DAT_09218ad8,0), (uVar3 & 1) == 0))
      goto LAB_07483a1c;
      lVar4 = FUN_03f5c394(DAT_091805f8,2);
      if (lVar4 == 0) goto LAB_07483a84;
      FUN_039af17c(lVar4,0,DAT_09223928);
      puVar6 = &DAT_09217828;
LAB_074832ac:
      uVar8 = *puVar6;
      uVar7 = 1;
      goto LAB_07483740;
    }
    if (uVar1 != 0xd5ddefc3) {
      if ((uVar1 != 0xd8e50294) ||
         (uVar3 = System_String__op_Equality(param_2,DAT_09222340,0), (uVar3 & 1) == 0))
      goto LAB_07483a1c;
      lVar4 = FUN_03f5c394(DAT_091805f8,2);
      if (lVar4 == 0) goto LAB_07483a84;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07483a88;
      *(undefined8 *)(lVar4 + 0x20) = DAT_09218ac0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_07483a88;
      *(undefined8 *)(lVar4 + 0x28) = DAT_09218ab0;
      goto LAB_07482ff0;
    }
    puVar6 = &DAT_0921d6f0;
  }
  uVar3 = System_String__op_Equality(param_2,*puVar6,0);
  if ((uVar3 & 1) == 0) {
LAB_07483a1c:
    uVar7 = thunk_FUN_03fc39d4(&DAT_092011e0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091f7790);
    uVar7 = System_String__Concat(uVar7,param_2,uVar8,0);
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar8 = thunk_FUN_03f9944c();
    System_Runtime_Remoting_RemotingException___ctor(uVar8,uVar7);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091c5c50);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar7);
  }
  lVar4 = FUN_03f5c394(DAT_091805f8,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = DAT_09222f30;
      thunk_FUN_03f5d7b8();
      System_Runtime_Remoting_ConfigHandler__ValidatePath(param_1,param_2,lVar4);
      System_Runtime_Remoting_ConfigHandler__ReadInteropXml(param_1,param_3,0);
      return;
    }
LAB_07483a88:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07483a84:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

