// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonReader$$ReadString
// address: 0x77198dc
// body: available
// range: 0x77198dc-0x7719b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7719b38 to 0x743662c System.String$$CreateString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7719b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7719b40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Bson_BsonReader__ReadString(long param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  
  if ((DAT_095229ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095229ed = 1;
  }
  Newtonsoft_Json_Bson_BsonReader__EnsureBuffers(param_1);
  iVar13 = 0;
  uVar15 = 0;
  plVar10 = (long *)0x0;
LAB_07719930:
  do {
    if (iVar13 < 0x80) {
      lVar14 = (long)iVar13;
      uVar12 = 0;
      bVar1 = true;
      do {
        plVar7 = *(long **)(param_1 + 0x78);
        if (plVar7 == (long *)0x0) goto LAB_07719b3c;
        cVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
        iVar11 = (int)uVar12;
        if (cVar4 == '\0') {
          if (plVar10 != (long *)0x0) {
            iVar11 = iVar11 + iVar13;
            uVar15 = uVar12 + (uVar15 & 0xffffffff);
            bVar3 = false;
            goto LAB_077199d8;
          }
          plVar10 = (long *)System_Text_Encoding__get_UTF8(0);
          if (plVar10 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar10 + 0x2d8))
                              (plVar10,*(undefined8 *)(param_1 + 0x88),0,uVar12 & 0xffffffff,
                               *(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(*plVar10 + 0x2e0));
            lVar14 = *(long *)(param_1 + 0xa0);
            if (lVar14 != 0) {
              uVar8 = *(undefined8 *)(param_1 + 0x90);
              *(int *)(lVar14 + 0x18) = (int)uVar15 + iVar11 + *(int *)(lVar14 + 0x18) + 1;
              System_String__CreateString(0,uVar8,0,uVar6,0);
              return;
            }
          }
          goto LAB_07719b3c;
        }
        lVar9 = *(long *)(param_1 + 0x88);
        if (lVar9 == 0) goto LAB_07719b3c;
        if (*(uint *)(lVar9 + 0x18) <= (uint)(iVar13 + iVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar2 = lVar14 + uVar12;
        lVar9 = lVar9 + lVar14 + uVar12;
        uVar12 = uVar12 + 1;
        bVar1 = lVar2 < 0x7f;
        *(char *)(lVar9 + 0x20) = cVar4;
      } while (lVar14 + uVar12 != 0x80);
      iVar11 = 0x80;
    }
    else {
      bVar1 = false;
      iVar11 = iVar13;
    }
    uVar12 = (ulong)(uint)(iVar11 - iVar13);
    bVar3 = plVar10 == (long *)0x0;
    uVar15 = (ulong)(uint)((iVar11 - iVar13) + (int)uVar15);
LAB_077199d8:
    uVar5 = Newtonsoft_Json_Bson_BsonReader__GetLastFullCharStop(param_1,iVar11 + -1);
    plVar7 = (long *)System_Text_Encoding__get_UTF8(0);
    if (plVar7 == (long *)0x0) goto LAB_07719b3c;
    uVar6 = (**(code **)(*plVar7 + 0x2d8))
                      (plVar7,*(undefined8 *)(param_1 + 0x88),0,uVar5 + 1,
                       *(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(*plVar7 + 0x2e0));
    if (bVar3) {
      plVar10 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(plVar10,0x100,0);
    }
    if (plVar10 == (long *)0x0) goto LAB_07719b3c;
    System_Text_StringBuilder__Append(plVar10,*(undefined8 *)(param_1 + 0x90),0,uVar6,0);
    if ((int)uVar12 + -1 <= (int)uVar5) break;
    iVar13 = (int)uVar12 + ~uVar5;
    System_Array__Copy(*(undefined8 *)(param_1 + 0x88),uVar5 + 1,*(undefined8 *)(param_1 + 0x88),0,
                       iVar13,0);
  } while( true );
  iVar13 = 0;
  if (bVar1) {
    lVar14 = *(long *)(param_1 + 0xa0);
    if (lVar14 != 0) {
      *(int *)(lVar14 + 0x18) = (int)uVar15 + *(int *)(lVar14 + 0x18) + 1;
                    /* WARNING: Could not recover jumptable at 0x07719ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      return;
    }
LAB_07719b3c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_07719930;
}

