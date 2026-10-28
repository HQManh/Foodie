// rea decompile_all
// name: Mono.Xml.SmallXmlParser$$ReadContent
// address: 0x7414030
// body: available
// range: 0x7414030-0x7414727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741418c to 0x74149d0 Mono.Xml.SmallXmlParser$$ReadCDATASection (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74141a0 to 0x7414cc4 Mono.Xml.SmallXmlParser$$ReadCharacters (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7414298 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741448c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74144bc to 0x7414acc Mono.Xml.SmallXmlParser$$ReadComment (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7414678 to 0x7413b1c Mono.Xml.SmallXmlParser$$Expect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74146ac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7414724 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Xml_SmallXmlParser__ReadContent(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  
  if ((DAT_09520f35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194978);
    FUN_03f5c2a4(&DAT_091fadd0);
    FUN_03f5c2a4(&DAT_091fd140);
    DAT_09520f35 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) goto LAB_0741448c;
  uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if ((uint)uVar3 < 0x21 && (1L << (uVar3 & 0x3f) & 0x100002600U) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0741448c;
    iVar1 = System_Text_StringBuilder__get_Length(*(long *)(param_1 + 0x38),0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    Mono_Xml_SmallXmlParser__HandleWhitespaces(param_1);
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) goto LAB_0741448c;
  iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (iVar1 != 0x3c) {
    Mono_Xml_SmallXmlParser__ReadCharacters(param_1);
    return;
  }
  Mono_Xml_SmallXmlParser__Read(param_1);
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) goto LAB_0741448c;
  iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (iVar1 == 0x3f) {
    Mono_Xml_SmallXmlParser__HandleBufferedContent(param_1);
    Mono_Xml_SmallXmlParser__Read(param_1);
    uVar4 = Mono_Xml_SmallXmlParser__ReadName(param_1);
    Mono_Xml_SmallXmlParser__SkipWhitespaces(param_1,0);
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      uVar9 = **(undefined8 **)(DAT_09535468 + 0xb8);
      iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (iVar1 == 0x3f) {
LAB_074142f4:
        plVar2 = *(long **)(param_1 + 0x10);
        if (plVar2 != (long *)0x0) {
          lVar10 = *plVar2;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_09194978) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto LAB_074144e0;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09194978,4);
LAB_074144e0:
          (*(code *)*puVar6)(plVar2,uVar4,uVar9,puVar6[1]);
          goto LAB_07414664;
        }
      }
      else {
        uVar7 = Mono_Xml_SmallXmlParser__ReadUntil(param_1,0x3f,0);
        uVar9 = System_String__Concat(uVar9,uVar7,0);
        plVar2 = *(long **)(param_1 + 0x18);
        while (plVar2 != (long *)0x0) {
          iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
          if (iVar1 == 0x3e) goto LAB_074142f4;
          uVar9 = System_String__Concat(uVar9,DAT_091fadd0,0);
          uVar7 = Mono_Xml_SmallXmlParser__ReadUntil(param_1,0x3f,0);
          uVar9 = System_String__Concat(uVar9,uVar7,0);
          plVar2 = *(long **)(param_1 + 0x18);
        }
      }
    }
    goto LAB_0741448c;
  }
  if (iVar1 == 0x2f) {
    Mono_Xml_SmallXmlParser__HandleBufferedContent(param_1);
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_0741448c;
    iVar1 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    if (iVar1 == 0) {
      uVar4 = Mono_Xml_SmallXmlParser__UnexpectedEndError(param_1);
      goto LAB_0741470c;
    }
    Mono_Xml_SmallXmlParser__Read(param_1);
    uVar4 = Mono_Xml_SmallXmlParser__ReadName(param_1);
    Mono_Xml_SmallXmlParser__SkipWhitespaces(param_1,0);
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_0741448c;
    plVar2 = (long *)(**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
    if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 == (long *)0x0) goto LAB_0741448c;
    (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 == (long *)0x0) goto LAB_0741448c;
    iVar1 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    if (iVar1 < 1) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 == (long *)0x0) goto LAB_0741448c;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      lVar10 = DAT_09535468;
      if (plVar5 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      else if ((*plVar5 != DAT_09535468) || (*(long **)(param_1 + 0x30) = plVar5, *plVar5 != lVar10)
              ) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
    }
    thunk_FUN_03f5d7b8(param_1 + 0x30,plVar5);
    uVar3 = System_String__op_Inequality(uVar4,plVar2,0);
    if ((uVar3 & 1) == 0) {
      plVar2 = *(long **)(param_1 + 0x10);
      if (plVar2 == (long *)0x0) goto LAB_0741448c;
      lVar10 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09194978) goto LAB_07414644;
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      goto LAB_07414634;
    }
    uVar9 = thunk_FUN_03fc39d4(&DAT_09201448);
    uVar4 = System_String__Format(uVar9,plVar2,uVar4,0);
  }
  else {
    if (iVar1 != 0x21) {
      Mono_Xml_SmallXmlParser__HandleBufferedContent(param_1);
      uVar4 = Mono_Xml_SmallXmlParser__ReadName(param_1);
      plVar2 = *(long **)(param_1 + 0x18);
      while (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        if (iVar1 == 0x3e) {
LAB_074143ac:
          plVar2 = *(long **)(param_1 + 0x10);
          if (plVar2 != (long *)0x0) {
            lVar10 = *plVar2;
            uVar9 = *(undefined8 *)(param_1 + 0x50);
            uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar3 == 0) goto LAB_074143f0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_074143d8;
          }
          break;
        }
        plVar2 = *(long **)(param_1 + 0x18);
        if (plVar2 == (long *)0x0) break;
        iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        if (iVar1 == 0x2f) goto LAB_074143ac;
        Mono_Xml_SmallXmlParser__ReadAttribute(param_1,*(undefined8 *)(param_1 + 0x50));
        plVar2 = *(long **)(param_1 + 0x18);
      }
      goto LAB_0741448c;
    }
    Mono_Xml_SmallXmlParser__Read(param_1);
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) goto LAB_0741448c;
    iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    if (iVar1 == 0x5b) {
      Mono_Xml_SmallXmlParser__Read(param_1);
      uVar4 = Mono_Xml_SmallXmlParser__ReadName(param_1);
      uVar3 = System_String__op_Inequality(uVar4,DAT_091fd140,0);
      if ((uVar3 & 1) == 0) {
        Mono_Xml_SmallXmlParser__Expect(param_1,0x5b);
        Mono_Xml_SmallXmlParser__ReadCDATASection(param_1);
        return;
      }
      puVar8 = &DAT_09205720;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x18);
      if (plVar2 == (long *)0x0) goto LAB_0741448c;
      iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (iVar1 == 0x2d) {
        Mono_Xml_SmallXmlParser__ReadComment(param_1);
        return;
      }
      uVar4 = Mono_Xml_SmallXmlParser__ReadName(param_1);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ffd30);
      uVar3 = System_String__op_Inequality(uVar4,uVar9,0);
      if ((uVar3 & 1) == 0) {
        puVar8 = &DAT_092107b8;
      }
      else {
        puVar8 = &DAT_09205728;
      }
    }
    uVar4 = thunk_FUN_03fc39d4(puVar8);
  }
  uVar4 = Mono_Xml_SmallXmlParser__Error(param_1,uVar4);
LAB_0741470c:
  uVar9 = thunk_FUN_03fc39d4(&DAT_091d9480);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar9);
LAB_07414644:
  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 3) * 0x10 + 0x138);
  goto LAB_07414654;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar11 = piVar11 + 4;
    if (uVar3 == 0) break;
LAB_074143d8:
    if (*(long *)(piVar11 + -2) == DAT_09194978) {
      puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138);
      goto LAB_07414508;
    }
  }
LAB_074143f0:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09194978,2);
LAB_07414508:
  (*(code *)*puVar6)(plVar2,uVar4,uVar9,puVar6[1]);
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_0741448c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Mono_Xml_SmallXmlParser_AttrListImpl__Clear();
  Mono_Xml_SmallXmlParser__SkipWhitespaces(param_1,0);
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) goto LAB_0741448c;
  iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (iVar1 != 0x2f) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_0741448c;
    (**(code **)(*plVar2 + 0x268))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x270));
    plVar2 = *(long **)(param_1 + 0x28);
    if (plVar2 == (long *)0x0) goto LAB_0741448c;
    (**(code **)(*plVar2 + 0x268))
              (plVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(*plVar2 + 0x270));
    goto LAB_07414664;
  }
  Mono_Xml_SmallXmlParser__Read(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) goto LAB_0741448c;
  lVar10 = *plVar2;
  uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_09194978) goto LAB_07414644;
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar3 != 0);
  }
LAB_07414634:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09194978,3);
LAB_07414654:
  (*(code *)*puVar6)(plVar2,uVar4,puVar6[1]);
LAB_07414664:
  Mono_Xml_SmallXmlParser__Expect(param_1,0x3e);
  return;
}

