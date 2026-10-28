// rea decompile_all
// name: System.Text.ASCIIEncoding$$GetChars
// address: 0x763ab20
// body: available
// range: 0x763ab20-0x763adaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763ada8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763adac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Text_ASCIIEncoding__GetChars
                (long param_1,byte *param_2,int param_3,ushort *param_4,int param_5,long param_6)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  byte *pbVar11;
  ushort *puVar12;
  ushort *puVar13;
  byte *pbVar14;
  ushort *local_68;
  
  if ((DAT_0952225a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183818);
    DAT_0952225a = 1;
  }
  pbVar11 = param_2 + param_3;
  local_68 = (ushort *)0x0;
  iVar7 = (int)param_2;
  if (param_6 == 0) {
    plVar10 = *(long **)(param_1 + 0x30);
    if (plVar10 != (long *)0x0) goto LAB_0763aba0;
LAB_0763ac54:
    lVar6 = FUN_03f5c394(DAT_0917fc88,1);
    plVar10 = (long *)0x0;
    pbVar9 = param_2;
    puVar12 = param_4;
    do {
      pbVar14 = pbVar9;
      puVar13 = puVar12;
      pbVar3 = pbVar9;
      if (pbVar11 <= pbVar9) goto joined_r0x0763ad54;
      while( true ) {
        bVar2 = *pbVar14;
        pbVar9 = pbVar14 + 1;
        if ((char)bVar2 < '\0') break;
        if (param_4 + param_5 <= puVar12) goto LAB_0763ad3c;
        puVar13 = puVar12 + 1;
        *puVar12 = (ushort)bVar2;
        puVar12 = puVar13;
        pbVar14 = pbVar9;
        pbVar3 = pbVar11;
        if (pbVar11 == pbVar9) goto joined_r0x0763ad54;
      }
      if (plVar10 == (long *)0x0) {
        if (param_6 == 0) {
          plVar10 = *(long **)(param_1 + 0x30);
          if (plVar10 == (long *)0x0) goto LAB_0763ada8;
          plVar10 = (long *)(**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
        }
        else {
          plVar10 = (long *)System_Text_Decoder__get_FallbackBuffer(param_6);
        }
        if (plVar10 == (long *)0x0) goto LAB_0763ada8;
        plVar10[2] = (long)param_2;
        plVar10[3] = (long)(param_4 + param_5);
      }
      if (lVar6 == 0) goto LAB_0763ada8;
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(byte *)(lVar6 + 0x20) = bVar2;
      local_68 = puVar12;
      uVar8 = (**(code **)(*plVar10 + 0x1b8))
                        (plVar10,lVar6,pbVar9,&local_68,*(undefined8 *)(*plVar10 + 0x1c0));
      puVar12 = local_68;
    } while ((uVar8 & 1) != 0);
    plVar10[2] = 0;
    (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
LAB_0763ad3c:
    System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,puVar12 == param_4,0);
    puVar13 = puVar12;
    pbVar3 = pbVar14;
joined_r0x0763ad54:
    if (param_6 == 0) goto LAB_0763ad6c;
    iVar7 = (int)pbVar3 - iVar7;
  }
  else {
    plVar10 = *(long **)(param_6 + 0x10);
    if (plVar10 == (long *)0x0) goto LAB_0763ac54;
LAB_0763aba0:
    if ((*plVar10 != DAT_09183818) ||
       (iVar5 = (**(code **)(DAT_09183818 + 0x188))(plVar10,*(undefined8 *)(DAT_09183818 + 400)),
       iVar5 != 1)) goto LAB_0763ac54;
    if (plVar10[2] == 0) {
LAB_0763ada8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = System_String__get_Chars(plVar10[2],0,0);
    puVar13 = param_4;
    if (param_5 < param_3) {
      System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,param_5 < 1,0);
      pbVar11 = param_2 + param_5;
    }
    while (param_2 < pbVar11) {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar1 = uVar4;
      if (-1 < (char)bVar2) {
        uVar1 = (ushort)bVar2;
      }
      *puVar13 = uVar1;
      puVar13 = puVar13 + 1;
    }
    if (param_6 == 0) goto LAB_0763ad6c;
    iVar7 = (int)param_2 - iVar7;
  }
  *(int *)(param_6 + 0x2c) = iVar7;
LAB_0763ad6c:
  uVar8 = (long)puVar13 - (long)param_4;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  return uVar8 >> 1;
}

