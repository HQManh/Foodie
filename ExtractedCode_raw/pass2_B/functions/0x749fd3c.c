// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMessageBase$$UnmarshalArgument
// address: 0x749fd3c
// body: available
// range: 0x749fd3c-0x74a040f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749fffc to 0x747ecd4 System.Runtime.Remoting.RemotingServices$$Unmarshal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a0240 to 0x742f1c8 System.String$$Copy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a0320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a0364 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a037c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a0380 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Messaging_CADMessageBase__UnmarshalArgument
          (undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar8 = &local_60;
  lVar15 = tpidr_el0;
  local_38 = *(long *)(lVar15 + 0x28);
  if ((DAT_09521375 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182188);
    FUN_03f5c2a4(&DAT_091821a8);
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0917fe48);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0917fe78);
    FUN_03f5c2a4(&DAT_091801b0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091801c0);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_091804c8);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091807a8);
    FUN_03f5c2a4(&DAT_091807b0);
    FUN_03f5c2a4(&DAT_091807b8);
    DAT_09521375 = 1;
  }
  local_58 = 0;
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
    goto LAB_074a02b8;
  }
  lVar14 = *param_2;
  bVar1 = *(byte *)(lVar14 + 0x130);
  if ((*(byte *)(DAT_09182188 + 0x130) <= bVar1) &&
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(DAT_09182188 + 0x130) * 8 + -8) ==
      DAT_09182188)) {
    if (param_3 != (long *)0x0) {
      if (*(long *)(lVar15 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0749ff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*param_3 + 0x2e8))
                          (param_3,(int)param_2[2],*(undefined8 *)(*param_3 + 0x2f0));
        return uVar4;
      }
      goto LAB_074a0380;
    }
LAB_074a0310:
    if (*(long *)(lVar15 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_074a0380;
  }
  if ((*(byte *)(DAT_091821a8 + 0x130) <= bVar1) &&
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(DAT_091821a8 + 0x130) * 8 + -8) ==
      DAT_091821a8)) {
    if (param_2[2] != 0) {
      uVar4 = System_Runtime_Remoting_ObjRef__DeserializeInTheCurrentDomain
                        (param_2[2],(int)param_2[3],param_2[4],0);
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189ed8);
      }
      if (*(long *)(lVar15 + 0x28) == local_38) {
        uVar4 = System_Runtime_Remoting_RemotingServices__Unmarshal(uVar4,0);
        return uVar4;
      }
      goto LAB_074a0380;
    }
    goto LAB_074a0310;
  }
  if ((*(byte *)(DAT_09535478 + 0x130) <= bVar1) &&
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) ==
      DAT_09535478)) {
    plVar10 = (long *)System_Object__GetType(param_2,0);
    if (plVar10 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      iVar3 = System_Type__GetTypeCode(uVar4,0);
      if (0xc < iVar3 - 3U) {
        thunk_FUN_03fc39d4(&DAT_09188920);
        uVar4 = thunk_FUN_03f9944c();
        System_NotSupportedException___ctor(uVar4,0);
        lVar15 = *(long *)(lVar15 + 0x28);
LAB_074a0344:
        if (lVar15 == local_38) {
          uVar16 = thunk_FUN_03fc39d4(&DAT_091c4508);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,uVar16);
        }
        goto LAB_074a0380;
      }
      puVar8 = (undefined8 *)(&PTR_DAT_08a61918)[iVar3 - 3U];
      uVar2 = System_Array__get_Length(param_2,0);
      uVar4 = FUN_03f5c394(*puVar8,uVar2);
      System_Array__CopyTo(param_2,uVar4,0,0);
      goto LAB_074a02b8;
    }
    goto LAB_074a0310;
  }
  uVar4 = System_Object__GetType(param_2,0);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__GetTypeCode(uVar4,0);
  switch(uVar2) {
  case 3:
    puVar9 = (undefined1 *)FUN_039aef84(param_2,DAT_09535400);
    uVar12 = *puVar9;
    lVar14 = DAT_09535400;
    goto LAB_074a0258;
  case 4:
    puVar7 = (undefined2 *)FUN_039aef84(param_2,DAT_09535460);
    uVar13 = *puVar7;
    lVar14 = DAT_09535460;
    goto LAB_074a0274;
  case 5:
    puVar9 = (undefined1 *)FUN_039aef84(param_2,DAT_09535408);
    uVar12 = *puVar9;
    lVar14 = DAT_09535408;
    goto LAB_074a0258;
  case 6:
    puVar9 = (undefined1 *)FUN_039aef84(param_2,DAT_095353f0);
    uVar12 = *puVar9;
    lVar14 = DAT_095353f0;
LAB_074a0258:
    local_50 = CONCAT71(local_50._1_7_,uVar12);
    break;
  case 7:
    puVar7 = (undefined2 *)FUN_039aef84(param_2,DAT_09535410);
    uVar13 = *puVar7;
    lVar14 = DAT_09535410;
    goto LAB_074a0274;
  case 8:
    puVar7 = (undefined2 *)FUN_039aef84(param_2,DAT_09535418);
    uVar13 = *puVar7;
    lVar14 = DAT_09535418;
LAB_074a0274:
    local_50 = CONCAT62(local_50._2_6_,uVar13);
    break;
  case 9:
    puVar6 = (undefined4 *)FUN_039aef84(param_2,DAT_09535420);
    uVar2 = *puVar6;
    lVar14 = DAT_09535420;
    goto LAB_074a0200;
  case 10:
    puVar6 = (undefined4 *)FUN_039aef84(param_2,DAT_09535428);
    uVar2 = *puVar6;
    lVar14 = DAT_09535428;
LAB_074a0200:
    local_50 = CONCAT44(local_50._4_4_,uVar2);
    break;
  case 0xb:
    puVar8 = (undefined8 *)FUN_039aef84(param_2,DAT_09535440);
    local_50 = *puVar8;
    lVar14 = DAT_09535440;
    break;
  case 0xc:
    puVar8 = (undefined8 *)FUN_039aef84(param_2,DAT_09535448);
    local_50 = *puVar8;
    lVar14 = DAT_09535448;
    break;
  case 0xd:
    puVar6 = (undefined4 *)FUN_039aef84(param_2,DAT_09535450);
    local_50 = CONCAT44(local_50._4_4_,*puVar6);
    lVar14 = DAT_09535450;
    break;
  case 0xe:
    puVar8 = (undefined8 *)FUN_039aef84(param_2,DAT_09535458);
    local_50 = *puVar8;
    lVar14 = DAT_09535458;
    break;
  case 0xf:
    puVar8 = (undefined8 *)FUN_039aef84(param_2,DAT_091837d8);
    uStack_48 = puVar8[1];
    local_50 = *puVar8;
    lVar14 = DAT_091837d8;
    break;
  case 0x10:
    puVar5 = (undefined8 *)FUN_039aef84(param_2,DAT_09183548);
    local_58 = *puVar5;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_DateTime__get_Ticks(&local_58,0);
    local_50 = 0;
    System_DateTime___ctor(&local_50,uVar4,0);
    local_60 = local_50;
    lVar14 = DAT_09183548;
    goto LAB_074a02b0;
  default:
    if (*param_2 == DAT_0918bd60) {
      puVar8 = (undefined8 *)FUN_039aef84(param_2,DAT_0918bd60);
      local_50 = *puVar8;
      lVar14 = DAT_0918bd60;
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar14 = DAT_0918bd60;
      }
    }
    else {
      if (*param_2 != DAT_09535430) {
        plVar10 = (long *)System_Object__GetType(param_2,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920a450);
        uVar16 = 0;
        if (plVar10 != (long *)0x0) {
          uVar16 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        }
        uVar11 = thunk_FUN_03fc39d4(&DAT_091f6268);
        uVar16 = System_String__Concat(uVar4,uVar16,uVar11,0);
        thunk_FUN_03fc39d4(&DAT_09188920);
        uVar4 = thunk_FUN_03f9944c();
        System_NotSupportedException___ctor(uVar4,uVar16,0);
        lVar15 = *(long *)(lVar15 + 0x28);
        goto LAB_074a0344;
      }
      puVar8 = (undefined8 *)FUN_039aef84(param_2);
      local_50 = *puVar8;
      lVar14 = DAT_09535430;
    }
    break;
  case 0x12:
    if (*param_2 == DAT_09535468) {
      if (*(long *)(lVar15 + 0x28) == local_38) {
        uVar4 = System_String__Copy(param_2,0);
        return uVar4;
      }
    }
    else if (*(long *)(lVar15 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
    goto LAB_074a0380;
  }
  puVar8 = &local_50;
LAB_074a02b0:
  uVar4 = FUN_03f5c42c(lVar14,puVar8);
LAB_074a02b8:
  if (*(long *)(lVar15 + 0x28) == local_38) {
    return uVar4;
  }
LAB_074a0380:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

