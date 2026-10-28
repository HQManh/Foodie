// rea decompile_all
// name: System.Diagnostics.StackTrace$$AddFrames
// address: 0x754f0a8
// body: available
// range: 0x754f0a8-0x754f527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754f524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Diagnostics_StackTrace__AddFrames
               (long *param_1,long param_2,uint param_3,undefined1 *param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined4 local_84;
  long local_80;
  undefined1 local_78 [16];
  char local_64 [4];
  
  if ((DAT_09521927 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091facc0);
    FUN_03f5c2a4(&DAT_091f6c48);
    FUN_03f5c2a4(&DAT_091fa2b0);
    FUN_03f5c2a4(&DAT_091f6068);
    FUN_03f5c2a4(&DAT_091facb8);
    FUN_03f5c2a4(&DAT_091f6590);
    FUN_03f5c2a4(&DAT_091f5c20);
    FUN_03f5c2a4(&DAT_091f5e60);
    FUN_03f5c2a4(&DAT_092083a8);
    DAT_09521927 = 1;
  }
  *param_4 = 0;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_64[0] = '\0';
  iVar2 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (iVar2 < 1) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    iVar2 = 0;
    do {
      plVar5 = (long *)(**(code **)(*param_1 + 0x188))
                                 (param_1,iVar2,*(undefined8 *)(*param_1 + 400));
      if (plVar5 == (long *)0x0) goto LAB_0754f524;
      uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      uVar7 = System_Reflection_MethodBase__op_Equality(uVar6,0,0);
      if ((uVar7 & 1) == 0) {
        uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        System_Diagnostics_StackTrace__GetFullNameForStackTrace
                  (uVar6,param_2,uVar6,uVar12 | param_3 & 1,local_64,param_4);
        if (local_64[0] == '\0') {
          iVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
          if (iVar4 == -1) {
            local_80 = plVar5[3];
            uVar6 = FUN_03f5c42c(DAT_09535440,&local_80);
            local_84 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
            uVar9 = FUN_03f5c42c(DAT_09535420,&local_84);
            if (param_2 == 0) goto LAB_0754f524;
            System_Text_StringBuilder__AppendFormat(param_2,DAT_091f5e60,uVar6,uVar9,0);
            if ((int)plVar5[4] != 0xffffff) {
              local_80 = CONCAT44(local_80._4_4_,(int)plVar5[4]);
              uVar6 = FUN_03f5c42c(DAT_09535428,&local_80);
              puVar11 = &DAT_091f6c48;
              goto LAB_0754f384;
            }
          }
          else {
            uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
            local_80 = CONCAT44(local_80._4_4_,uVar3);
            uVar6 = FUN_03f5c42c(DAT_09535420,&local_80);
            if (param_2 == 0) goto LAB_0754f524;
            puVar11 = &DAT_091f6068;
LAB_0754f384:
            System_Text_StringBuilder__AppendFormat(param_2,*puVar11,uVar6,0);
          }
          lVar8 = System_Diagnostics_StackFrame__GetSecureFileName(plVar5);
          if (lVar8 == 0) goto LAB_0754f524;
          sVar1 = System_String__get_Chars(lVar8,0,0);
          if (sVar1 == 0x3c) {
            plVar10 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                        (plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
            if (plVar10 == (long *)0x0) {
LAB_0754f524:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            if (plVar10 == (long *)0x0) goto LAB_0754f524;
            auVar13 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
            local_78 = auVar13;
            uVar6 = System_Guid__ToString(local_78,DAT_092083a8,0);
            lVar8 = System_Diagnostics_StackTrace__GetAotId();
            iVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
            if ((iVar4 == -1) && (lVar8 != 0)) {
              lVar8 = System_String__Format(DAT_091facb8,uVar6,lVar8,0);
            }
            else {
              lVar8 = System_String__Format(DAT_091facc0,uVar6,0);
            }
          }
          uVar3 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
          local_80 = CONCAT44(local_80._4_4_,uVar3);
          uVar9 = FUN_03f5c42c(DAT_09535420,&local_80);
          uVar6 = DAT_091f6590;
          goto LAB_0754f4c4;
        }
      }
      else {
        if (uVar12 == 0 && (param_3 & 1) == 0) {
          if (param_2 == 0) goto LAB_0754f524;
        }
        else {
          uVar6 = System_Environment__get_NewLine(0);
          if (param_2 == 0) goto LAB_0754f524;
          System_Text_StringBuilder__Append(param_2,uVar6,0);
        }
        System_Text_StringBuilder__Append(param_2,DAT_091f5c20,0);
        if (plVar5[8] == 0) {
          local_80 = plVar5[3];
          lVar8 = FUN_03f5c42c(DAT_09535440,&local_80);
          local_84 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          uVar9 = FUN_03f5c42c(DAT_09535420,&local_84);
          uVar6 = DAT_091fa2b0;
LAB_0754f4c4:
          System_Text_StringBuilder__AppendFormat(param_2,uVar6,lVar8,uVar9,0);
        }
        else {
          System_Text_StringBuilder__Append(param_2,plVar5[8],0);
        }
        uVar12 = 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    } while (iVar2 < iVar4);
  }
  return uVar12;
}

